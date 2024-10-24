class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         vector<vector<int>> res;
//         for(int i=0;i<n-2;i++)
//         {
//             if(i>0 && nums[i]==nums[i-1]) continue;
//             int l=i+1;
//             int r=n-1;
//             while(l<r)
//             {
//                 int sum=nums[i]+nums[l]+nums[r];
//                 if(sum==0)
//                 {
//                     res.push_back({nums[i],nums[l],nums[r]});
//                 if(l<r && nums[l]==nums[l+1])  l++;
//                 if(l<r && nums[r]==nums[r-1])  r--;
//                 l++;
//                 r--;
//                 }
//             else if(sum<0)
//             {
//                 l++;
//             }
//             else
//             {
//                 r--;
//             }
//             }

//         }
//         return res;
//     }
// };
  vector<vector<int>> res;  // Result vector to store the triplets
        int n = nums.size();
        
        // Sort the input array
        sort(nums.begin(), nums.end());
        
        // Traverse through the array
        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicates for 'i'
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;  // Left pointer
            int r = n - 1;  // Right pointer

            // Two-pointer approach
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0) {
                    // Found a valid triplet
                    res.push_back({nums[i], nums[l], nums[r]});
                    
                    // Move left pointer and avoid duplicates
                    while (l < r && nums[l] == nums[l + 1]) ++l;
                    
                    // Move right pointer and avoid duplicates
                    while (l < r && nums[r] == nums[r - 1]) --r;

                    // Move both pointers
                    ++l;
                    --r;
                } else if (sum < 0) {
                    ++l;  // Sum too small, move left pointer to the right
                } else {
                    --r;  // Sum too large, move right pointer to the left
                }
            }
        }
        
        return res;  // Return the result vector
    }
};