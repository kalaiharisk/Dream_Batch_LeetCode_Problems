class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        if(s1.size()!=s2.size())
        {
            return false;
        }
        vector<int> differ;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                differ.push_back(i);
                if(differ.size()>2) return false;
            }
        }
        return differ.size()==2 && s1[differ[0]]==s2[differ[1]] && s1[differ[1]]==s2[differ[0]];
        
    }
};