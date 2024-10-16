class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int mi=prices[0];
        int m=0;

        for(int i=1;i<prices.size();i++)
        {
                m=max(m,prices[i]-mi);
                mi=min(mi,prices[i]);
        }
        return m;
        
    }
};