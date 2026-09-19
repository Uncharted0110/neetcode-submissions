class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int currPrice = prices[0];

        for(auto& price : prices)
        {
            profit = max(profit, (price - currPrice));
            currPrice = min(currPrice, price);
        }

        return profit;
    }
};
