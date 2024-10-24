class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        for(int it:nums)
        {
            if(it<0)
            {
                res.push_back(abs(it));
            }
            else
            {
                res.push_back(it);
            }
        }
        vector<int> out;
        for(int i=0;i<n;i++)
        {
            out.push_back(res[i]*res[i]);
        }
        sort(out.begin(),out.end());
        return out;
    }
};