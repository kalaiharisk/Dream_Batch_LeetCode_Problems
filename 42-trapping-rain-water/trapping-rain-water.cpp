class Solution {
public:
    int trap(vector<int>& height) {
    //Using 2 pointer approach
    int size=height.size();
    int l=0;
    int r=size-1;
    int result=0;
    int lMax=height[l];
    int rMax=height[r];
    while(l<=r){
        if(lMax<=rMax){
            lMax=max(lMax,height[l]);
            result+=(lMax-height[l++]);
        }
        else{
            rMax=max(rMax,height[r]);
            result+=(rMax-height[r--]);
        }
    }
    return result;
    }
};