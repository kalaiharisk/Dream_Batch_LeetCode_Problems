class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int reslen=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                int l=i,r=j;
                while(l<r && s[l]==s[r])
                {
                    l++;
                    r--;
                }
                if(l>=r && reslen<(j-i+1))
                {
                    res=s.substr(i,j-i+1);
                    reslen=j-i+1;
                    
                }
            }
        }
        return res;
        
    }
};