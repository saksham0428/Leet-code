class Solution {
    public int minimumDifference(int[] nums, int k) {
        Arrays.sort(nums);
        int n= nums.length;
        if(k==1) return 0;
        int i=0;
        int diff=nums[i+k-1]-nums[i];
        for(i=0;i+k-1<n;i++){
            diff=Math.min(diff,nums[i+k-1]-nums[i]);
        }
        return diff;
    }
}