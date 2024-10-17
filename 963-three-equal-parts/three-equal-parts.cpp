class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int n=arr.size();
        int onescount=0;
        for(int num:arr)
        {
            if(num==1)
            {
                onescount++;
            }
        }
        if(onescount%3!=0)
        {
            return{-1,-1};
        }
        if(onescount==0)
        {
            return {0,n- 1};
        }
        int partcount=onescount/3;
        int f=-1,s=-1,t=-1;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                count++;
                if(count==1)  f=i;
                else if(count==partcount+ 1)  s=i;
                else if(count==2*partcount+ 1) t=i;
            }
        }
        while(t<n && arr[f]==arr[s] && arr[s]==arr[t])
        {
            f++;
            s++;
            t++;
        }
        if(t==n)
        {
            return {f- 1,s};
        }
        return {-1,-1};

        
    }
};