class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = prices.size();
        int max_profit = 0;
        for(int i = 0 ; i < n-1; i++)
        {
            mini = min(mini , prices[i]);
           int profit = prices[i+1] - mini;
            max_profit = max(max_profit , profit);
            
        }
        return max_profit;
    }
};
