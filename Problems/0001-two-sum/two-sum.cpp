#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  /*
    Time & Space Complexity
    Time: O(n) — single pass
    Space: O(n) — for the hash map
  */
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> um;

    for (int i = 0; i < nums.size(); i++)
    {
      int complement = target - nums[i];

      if (um.count(complement))
        return {um[complement], i};

      um[nums[i]] = i;
    }

    return {};
  }

  /*
    Time & Space Complexity
    Time: O(n²) — Brute-force
    Space: O(1)
  */
  vector<int> twoSumTwo(vector<int> &nums, int target)
  {

    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
        {
          return {i, j};
        }
      }
    }

    return {};
  }
};

int main()
{
  vector<int> testNums = {2, 7, 11, 15, 4};
  int target = 9;
  // output == {0, 1}

  Solution s;
  vector<int> res = s.twoSum(testNums, target);

  for (int i = 0; i < res.size(); i++)
  {
    cout << res[i] << " ";
  }
  return 0;
}