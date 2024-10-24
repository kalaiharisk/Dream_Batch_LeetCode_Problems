class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        int n=nums.size();
        for(int it:nums)
        {
            if(it%2==0)
            {
                even.push_back(it);
            }
            else
            {
                odd.push_back(it);
            }
        }
        for(int i=0;i<n;i++)

        {
            if(i%2==0)
            {
                nums[i]=even[i/2];
            }
            else
            {
                nums[i]=odd[i/2];
            }
        }
        return nums;
        
    }
};