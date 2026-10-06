class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxxProfit = 0;
        int buyCost = prices[0];
       // int sellCost = prices[1];
        int size = prices.size();
        for(int i = 1; i < size; ++i)
        {
            if(prices[i] >= buyCost)
            {
                maxxProfit = max(maxxProfit, prices[i] - buyCost);
            }
            buyCost = min(buyCost, prices[i]);
        }
        return maxxProfit;
    }
};