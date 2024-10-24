class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int closesum=INT_MAX;
        for(int i=0;i<n- 1;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sursum=nums[i]+nums[l]+nums[r];
                if(closesum==INT_MAX||abs(sursum-target)<abs(closesum-target))
                {
                    closesum=sursum;
                }
                if(sursum<target)
                {
                    l++;
                }
                else if(sursum>target)
                {
                    r--;
                }
                else
                {
                    return sursum;
                }
            }
        }
        return closesum;

        
    }
};