import inspect
import os
import pytest

rootdir = os.path.dirname(__file__)


def pytest_pycollect_makeitem(collector, name, obj):
    if (inspect.isclass(obj) and obj.__name__ == 'Solution' and
            hasattr(obj, 'tests')):
        # The solution will be the only defined method on the class
        attrname, _ = inspect.getmembers(obj, inspect.ismethod)[0]

        cases = obj.tests
        if not cases:
            return

        # Split into (args, expected)
        cases = [(c[:-1], c[-1]) for c in cases]

        @pytest.mark.parametrize(['args', 'expected'], cases)
        def test(args, expected):
            assert getattr(obj(), attrname)(*args) == expected

        return list(collector._genfunctions('test_' + obj.__module__, test))

