class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int minn=prices[0];
        int maxx=0;
        for(int i=1;i<prices.size();i++)
        {
            minn=min(minn,prices[i]);
            maxx=max(maxx,prices[i]-minn);
        }
        return maxx;
        
    }
};