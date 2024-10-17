class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> pro1(n, 0);
        vector<int> pro2(n,0);

        int minn=prices[0];
        for(int i=1;i<n;i++)
        {
            minn=min(minn,prices[i]);
            pro1[i]=max(pro1[i - 1 ],prices[i]-minn);
        }
        int maxx=prices[n- 1];
        for(int i=n - 2;i>=0;i--)
        {
            maxx=max(maxx,prices[i]);
            pro2[i]=max(pro2[i + 1 ],maxx-prices[i]+pro1[i]);
        }
        return pro2[0];

        
    }
};