class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxm = 0;
        int lotn = prices[0];
        for(int i=0;i<prices.size();i++){
            maxm = max(maxm,prices[i]-lotn);
            lotn = min(prices[i],lotn);
        }
        return maxm;
    }
};
