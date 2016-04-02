package leetcode

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestTwoSum(t *testing.T) {
	idxs := TwoSum([]int{2, 7, 11, 15}, 9)
	assert.Equal(t, 1, idxs[0], "should be equal")
	assert.Equal(t, 2, idxs[1], "should be equal")
}
