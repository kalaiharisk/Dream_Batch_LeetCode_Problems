class Solution {
    public String clearDigits(String s) {
        Stack<Character> stack=new Stack<>();
        for(char ch:s.toCharArray())
        {
            if('0'<=ch && ch<='9')
            {
                stack.pop();
            }
            else
            {
                stack.push(ch);
            }
        }
        String res="";
        for(char ch:stack)
        {
            res+=ch;
        }
        return res;
        
    }
}