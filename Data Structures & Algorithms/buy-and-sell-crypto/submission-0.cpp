class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int currPrice = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < currPrice)
                currPrice = prices[i];
            profit = max(profit, (prices[i] - currPrice));
        }

        return profit;
    }
};
