class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> out(n,1);
        int l=1;
        for(int i=0;i<n;i++)
        {
            out[i]*=l;
            l*=nums[i];
        }
        int r=1;
        for(int i=n-1;i>=0;i--)
        {
            out[i]*=r;
            r*=nums[i];
        }
        return out;
        
    }
};