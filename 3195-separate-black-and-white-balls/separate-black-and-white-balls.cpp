class Solution {
public:
    long long minimumSteps(string s) {
        long ans=0;
        long c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') c++;
            else
               ans+=c;
        }
        return ans;
     
        
    }
};