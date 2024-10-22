class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(char c:columnTitle)
        {
            int charval=c-'A'+1;
            res=res*26+charval;
        }
        return res;
        
        
    }
};