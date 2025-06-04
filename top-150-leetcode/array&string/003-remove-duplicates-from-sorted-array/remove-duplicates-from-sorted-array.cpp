#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.empty())
      return 0;

    int k = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != nums[k])
      {
        nums[++k] = nums[i];
      }
    }

    return k + 1;
  }
};

int main()
{
  Solution s;

  vector<int> testNums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  // Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

  int k = s.removeDuplicates(testNums);

  for (int i = 0; i < k; i++)
  {
    cout << testNums[i] << " ";
  }
  return 0;
}