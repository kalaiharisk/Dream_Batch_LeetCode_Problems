class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(),cit.end());
        for(int i=0;i<cit.size();i++)
        {
            int h=cit.size()-i;
            if(cit[i]>=h)
            {
                return h;
            }
        }
        return 0;
    }
};