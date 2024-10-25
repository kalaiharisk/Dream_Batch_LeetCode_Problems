class Solution {
    public boolean canConstruct(String r, String m) {
        int charc[]=new int[26];
        for(int c:m.toCharArray())
        {
            charc[c-'a']++;
        }
        for(int c:r.toCharArray())
        {
            if(charc[c-'a']==0)
            {

            return false;
            }
        charc[c-'a']--;
        }
        return true;
    }
}