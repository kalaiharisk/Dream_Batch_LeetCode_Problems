class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int cur=0;
        int far=0;
        int j=0;
        for(int i=0;i<n- 1;i++)
        {
            far=max(far,i+nums[i]);
            if(i==cur)
            {
                j++;
                cur=far;
            }
            if(cur>=n- 1) break;
        }
        return j;
        
    }
};