class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        int n=nums.size();
        for(int i=0;i<=maxreach;i++)
        {
            maxreach=max(maxreach,i+nums[i]);
            if(i>=n- 1)
            {
                return true;
            }
        }
        return false;
    }        
};