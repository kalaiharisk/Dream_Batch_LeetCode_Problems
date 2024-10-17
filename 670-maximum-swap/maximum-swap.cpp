
class Solution {
public:
    int maximumSwap(int num) {
      string s=to_string(num);
      string t=s;
      sort(s.rbegin(),s.rend());
      for(int i=0;i<s.size();i++)
      {
        if(s[i]!=t[i])
        {
            int ind=-1;
            for(int j=0;j<t.size();j++)
            {
                if(t[j]==s[i])
                {

                ind=j;
                }
            }
        swap(t[ind],t[i]);
        break;
        }
      }
        return stoi(t);
    }
};