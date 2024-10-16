class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int by=prices[0];
        int p=0;
        for(int i=1;i<prices.size();i++)
        {
            if((prices[i]-by)>0)
            {
                p+=prices[i]-by;
            }
            by=prices[i];
        }
        return p;
        
    }
};