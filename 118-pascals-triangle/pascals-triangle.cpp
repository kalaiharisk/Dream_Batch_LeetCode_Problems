class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> tri;
        for(int i=0;i<n;i++)
        {
            vector<int> row(i+ 1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=tri[i -1 ][j- 1]+tri[i - 1][j];
            }
            tri.push_back(row);
        }
        return tri;
        
    }
};