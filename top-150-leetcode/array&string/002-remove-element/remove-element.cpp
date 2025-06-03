#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != val)
      {
        nums[k++] = nums[i];
      }
    }
    return k;
  }
};

int main()
{
  Solution s;

  vector<int> testNums = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;

  int k = s.removeElement(testNums, val);

  for (int i = 0; i < k; i++)
  {
    cout << testNums[i] << " ";
  }
  return 0;
}