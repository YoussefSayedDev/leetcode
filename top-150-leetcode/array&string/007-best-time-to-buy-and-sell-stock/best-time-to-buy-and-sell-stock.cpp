#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices)
    {
      if (price < minPrice)
        minPrice = price;
      else if (price - minPrice > maxProfit)
        maxProfit = price - minPrice;
    }
    return maxProfit;
  }
};

int main()
{
  Solution s;

  vector<int> testNums = {7, 1, 5, 3, 6, 4};

  // output: 5

  int profit = s.maxProfit(testNums);

  cout << profit << endl;

  return 0;
}