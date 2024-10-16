class Solution {
public:
    int candy(vector<int>& a) {
        int n = a.size();
        int sum=0;
        vector<int> left(n,1);
        vector<int> right(n,1);
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1])
                left[i] = left[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[i+1])
                right[i] = right[i+1]+1;
        }
        for(int i=0;i<n;i++){
            if(left[i]<right[i])
                left[i] = right[i];
            sum+=left[i];
        }
        return sum;
    }
};