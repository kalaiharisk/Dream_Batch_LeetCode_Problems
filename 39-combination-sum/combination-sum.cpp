class Solution {
public:
    void backtrack(vector<int>& can,int target,vector<int>& combi,vector<vector<int>>& res,int st)
    {
        if(target==0)
        {
            res.push_back(combi);
            return;
        }
        if(target<0) return;
        for(int i=st;i<can.size();i++)
        {
            combi.push_back(can[i]);
            backtrack(can,target-can[i],combi,res,i);
            combi.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combi;
        backtrack(candidates,target,combi,result,0);
        return result;

        
    }
};