class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int st=0;
        int en=n- 1;
        while(st<en)
        {
            int sum=numbers[st] + numbers[en];
            if(sum==target)
            {
                return {st+ 1,en+ 1};
            }
            else if(sum<target)
            {

            st++;
            }
            else
            {

            en--;
            }
        }
        return {0,0};
    }
};