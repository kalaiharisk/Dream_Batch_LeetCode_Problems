class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int m=0,c=0;
        for(int x:nums)
        {
            m|=x;
        }
        int t=1<<n;
        for(int j=0;j<t;j++)
        {
            int a=0;
            for(int i=0;i<n;i++)
            {
                if(j&(1<<i))
                {
                    a|=nums[i];
                }
            }
            if(a==m)
            {
                c++;
            }
        }
        return c;
        
    }
};