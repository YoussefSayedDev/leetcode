#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    // Boyer-Moore Majority Voting Algorithm

    int candidate = -1, votes = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (votes == 0)
      {
        candidate = nums[i];
        votes = 1;
      }
      else
      {
        if (candidate == nums[i])
          votes++;
        else
          votes--;
      }
    }

    return candidate;
  }
};

int main()
{
  Solution s;

  vector<int> testNums = {2, 2, 1, 1, 1, 2, 2};
  // Output: 2

  int k = s.majorityElement(testNums);

  cout << "K: " << k << endl;

  return 0;
}