class Solution {
public:
    string countAndSay(int n) {
        if(n==1)  return "1";
        string prev=countAndSay(n- 1);
        string res="";
        int c=0;
        for(int i=0;i<prev.size();i++)
        {
            c=1;
            while(i+1<prev.length() && prev[i]==prev[i+ 1])
            {
                c++;
                i++;
                
            }
            res+=to_string(c)+prev[i];
        }
        return res;

        
    }
};