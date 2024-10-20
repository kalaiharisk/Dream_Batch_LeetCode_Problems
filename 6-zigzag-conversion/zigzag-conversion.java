class Solution {
    public String convert(String s, int numRows) {
        if(numRows==1) return s;
        String[] arr=new String[numRows];
        for(int i=0;i<numRows;i++)
        {
            arr[i]="";
        }
        int cur=0;
        boolean godown=false;
        for(int i=0;i<s.length();i++)
        {
            arr[cur]+=s.charAt(i);
            if(cur==0 || cur==numRows- 1)
            {
                godown=!godown;
            }
            if(godown)
            {
                cur++;
            }
            else
            {
                cur--;
            }
        }
        String res="";
        for(String x:arr)
        {
            res+=x;
        }
        return res;
        
    }
}