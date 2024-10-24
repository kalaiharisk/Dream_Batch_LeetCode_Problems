class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            if(nums[l]==target)
            {
                return l;
            }
            else if(nums[r]==target)
            {
                return r;
            }
            l++;
            r--;
        }
        return -1;
        
    }
};