#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {

    if (nums.size() <= 2)
      return nums.size();

    int k = 2;

    for (int i = 2; i < nums.size(); i++)
    {
      if (nums[i] != nums[k - 2])
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

  vector<int> testNums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
  // Output: 7, nums = [0,0,1,1,2,3,3,_,_]

  int k = s.removeDuplicates(testNums);

  for (int i = 0; i < k; i++)
  {
    cout << testNums[i] << " ";
  }
  return 0;
}