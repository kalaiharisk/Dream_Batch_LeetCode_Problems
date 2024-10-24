class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        for(int it:nums)
        {
            if(it%2==0)
            {
                res.push_back(it);
            }
        }
        for(int it:nums)
        {
            if(it%2!=0)
            {
                res.push_back(it);
            }
        }
        return res;
        
    }
};