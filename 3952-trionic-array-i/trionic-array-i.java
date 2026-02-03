class Solution {
    public boolean isTrionic(int[] nums) {
        int n=nums.length;
        if(nums[0]>nums[1]) return false;
        int p=0,q=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]) return false;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){

            p=i;
            break;
            }
        }
        for(int i=p; i<n-1;i++){
            if(nums[i]<nums[i+1]){

            q=i;
            break;
            }
        }
        System.out.println(p);
        System.out.println(q);
        for(int i=q;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        if(nums[0]<nums[p]&&nums[p]>nums[q]&&nums[q]<nums[n-1]){
            return true;
        }
        return false;
    }
}