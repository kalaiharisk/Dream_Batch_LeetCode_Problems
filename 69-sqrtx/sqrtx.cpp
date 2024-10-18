class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)
        {
            return x;
        }
        int l=0;
        int r=x;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            long long sqr=(long long)mid*mid;
            if(sqr==x)
            {
                return mid;
            }
            else if(sqr<x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return ans;
        
    }
};