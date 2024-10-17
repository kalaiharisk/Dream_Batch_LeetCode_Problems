class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxlen=0;
        String cs="";
        for(int i=0;i<s.length();i++)
        {
            char cc=s.charAt(i);
            if(cs.indexOf(cc)!= -1)
            {
                cs=cs.substring(cs.indexOf(cc) + 1);

            }
            cs+=cc;
            maxlen=Math.max(maxlen,cs.length());
        }
        return maxlen;
        
    }
}