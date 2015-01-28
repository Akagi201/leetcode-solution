#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target) {
  vector<int> result;
  int low = 0;
  int high = numbers.size() - 1;
  while (low < high) {
    if (numbers[low] + numbers[high] == target) {
      result.push_back(low + 1);
      result.push_back(high + 1);
      return result;
    } else {
      numbers[low] + numbers[high] > target ? high-- : low++;
    }
  }

  return result;
}
