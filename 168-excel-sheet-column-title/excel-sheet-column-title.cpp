class Solution {
public:
    string convertToTitle(int col) {
        string res="";
        while(col>0)
        {
            col--;
            char letter='A' + (col%26);
            res=letter+res;
            col/=26;
        }
        
        return res;
    }
};