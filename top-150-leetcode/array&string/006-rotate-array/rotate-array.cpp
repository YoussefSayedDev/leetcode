#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    int n = nums.size();
    k = k % n; // important when k > n

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
  }
};

int main()
{
  Solution s;

  vector<int> testNums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;

  // output: [5,6,7,1,2,3,4]

  s.rotate(testNums, 3);

  for (int i = 0; i < testNums.size(); i++)
  {
    cout << testNums[i] << " ";
  }

  return 0;
}