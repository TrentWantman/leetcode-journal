// 121. Best Time to Buy and Sell Stock
// Easy | Sliding Window
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Time: O(n) | Space: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int lowest = prices[0];
        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < lowest){
                lowest = prices[i];
            }
            max_profit = max(prices[i]-lowest, max_profit);
        }
        return max_profit;
    }
};
