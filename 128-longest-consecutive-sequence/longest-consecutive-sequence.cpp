class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    if(n==0)  return 0;
    sort(nums.begin(),nums.end());
    int longs=1;
    int curs=1;
    for(int i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1])
        {
            continue;
        }
        if(nums[i]==nums[i - 1]+ 1)
        {
              curs++;
        }
        else
        {

            longs=max(longs,curs);
            curs=1;
        }
    }
    longs=max(longs,curs);
    return longs;
    }
};