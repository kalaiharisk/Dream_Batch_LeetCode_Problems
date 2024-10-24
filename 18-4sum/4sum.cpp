// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> res;
//         int n=nums.size();

//         for(int i=0;i<n-3;i++)
//         {
//             if(i>0 && nums[i]==nums[i-1])  continue;
//             for(int j=i+1; j<n-2;j++)
//             {
//                 if(j>i+1 && nums[j]==nums[j-1])  continue;
//                 int l=j+1;
//                 int r=n-1;
//                 while(l<r)
//                 {
//                     long long sum= (long long)nums[i]+nums[j]+nums[l]+nums[r];
//                     if(sum<target)
//                     {
//                         l++;
//                     }
//                     else if(sum>target)
//                     {
//                         r--;
//                     }
//                     else
//                     {
//                         res.push_back({nums[i],nums[j],nums[l],nums[r]});
//                         while(l<r && nums[l]==nums[l+1]) l++;
//                         while(l<r && nums[r]==nums[r-1]) r--;
//                         l++;
//                         r--;
//                     }
//                 }
//             }
//         }
//         return res;
        
//     }
// };

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Iterate through the array
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for first element

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for second element

                int left = j + 1; // Initialize left pointer
                int right = n - 1; // Initialize right pointer
                
                // Step 3: Use two pointers to find pairs
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    
                    if (sum < target) {
                        left++; // Increase sum by moving left pointer right
                    } else if (sum > target) {
                        right--; // Decrease sum by moving right pointer left
                    } else {
                        // Found a quadruplet
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        // Skip duplicates for left pointer
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        // Skip duplicates for right pointer
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++; // Move past the last found element
                        right--; // Move past the last found element
                    }
                }
            }
        }
        return res; // Return the result
    }
};
