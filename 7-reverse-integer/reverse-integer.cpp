class Solution {
public:
    int reverse(int x) {
        int num=x;
        int n=abs(x);
        int q,r, sum=0;
        while(n!=0)
        {
            q=n/10;
            r=n%10;
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && r > 7)) return 0;
            sum=sum*10+r;
            n=q;
        }
        if(num<0)
        {
            sum=-sum;
        }
        return sum;
    }
};