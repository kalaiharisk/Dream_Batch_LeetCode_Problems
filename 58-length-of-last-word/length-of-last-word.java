class Solution {
    public int lengthOfLastWord(String s) {
        String [] st=s.split(" ");
        int n=s.length();
        if(s.isEmpty())
          return 0;
        return st[st.length - 1].length();
        
    }
}