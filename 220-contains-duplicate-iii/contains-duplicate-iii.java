class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int indexDiff, int valueDiff) {
        TreeSet<Integer> set=new TreeSet<>();
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            Integer floor = set.floor(num);

            Integer ceil = set.ceiling(num);
            if((floor!=null && num-floor<=valueDiff)|| (ceil!=null && ceil-num<=valueDiff) )
            {
                return true;
            }
            set.add(num);
            if(i>=indexDiff)
            {
                set.remove(nums[i-indexDiff]);

            }
        }
        return false;
        
    }
}