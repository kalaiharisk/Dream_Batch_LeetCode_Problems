class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> merged;
        for(int i=0;i<n;i++)
        {
            merged.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            merged.push_back(nums2[i]);
        }
        int l=merged.size();
        sort(merged.begin(),merged.end());
        if(l%2==1)
        {
            return static_cast<double>(merged[l/2]);
        }
        else
        {
            int x=merged[l/2 -1];
            int y=merged[l/2];
            return(static_cast<double> (x)+static_cast<double>(y))/2.0;
        }
        
    }
};