class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> chars;
        unordered_map<char,int> chart;
        for(int i=0;i<s.size();i++)
        {
            if(chars.find(s[i])==chars.end())
            {
                chars[s[i]]=i;
            }
            if(chart.find(t[i])==chart.end())
            {
                chart[t[i]]=i;
            }
        if(chars[s[i]]!=chart[t[i]])
        {
            return false;
        }
        }
        return true;
    }
};