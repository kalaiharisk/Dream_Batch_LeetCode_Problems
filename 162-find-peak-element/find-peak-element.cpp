class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return 0;
        for (int i = 0; i < nums.size(); ++i) {
        bool isLeftSmaller = (i == 0 || nums[i] > nums[i - 1]);
        bool isRightSmaller = (i == nums.size() - 1 || nums[i] > nums[i + 1]);

        if (isLeftSmaller && isRightSmaller) {
            return i;
        }
        }
        return -1;


    }
};