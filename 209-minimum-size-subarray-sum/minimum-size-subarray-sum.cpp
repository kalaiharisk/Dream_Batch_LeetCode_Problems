class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int sum=0;
        int minl=INT_MAX;
        for(int r=0;r<n;r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                minl=min(minl,r-l+ 1);
                sum-=nums[l];
                l++;
            }
        }
        return (minl == INT_MAX) ? 0 : minl;
       
    }
};