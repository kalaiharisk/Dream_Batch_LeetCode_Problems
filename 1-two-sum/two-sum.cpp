class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> mp(n);
        for(int i=0;i<n;i++)
        {
            mp[i]={nums[i],i};
        }
        sort(mp.begin(),mp.end());
        int l=0;
        int r=n-1;
        while(l<r)
        {
            int sum=mp[l].first+mp[r].first;
            if(sum==target)
            {
                return {mp[l].second,mp[r].second};
            }
            if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return {};

    }
};