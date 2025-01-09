class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len=pref.length();
        int c=0;
        for(string w:words)
        {
            if(w.length()>=len)
            {
                if(w.substr(0,len)==pref)
                {
                    c++;
                }
            }
        }
    return c;    
    }
};