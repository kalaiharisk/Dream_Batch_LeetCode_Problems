class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
        int l=i + 1;
        int r=n- 1;
            if(i>0 && nums[i]==nums[i - 1])
            {
                continue;
            }
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0)
                {
                    res.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+ 1])
                    {
                        l++;
                    }
                    while(l<r && nums[r]==nums[r - 1])
                    {
                        r--;
                    }
                    l++;
                    r--;

                }
                else if(sum<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
            return res;
    }
};