#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallestPrice = prices[0];
        int bestProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            smallestPrice = min(smallestPrice, prices[i]);
            bestProfit = max(bestProfit, prices[i] - smallestPrice);
        }

        return bestProfit;
    }
};