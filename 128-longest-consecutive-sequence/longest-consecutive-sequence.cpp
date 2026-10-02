class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int count=1;
        int mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) continue;
            if(nums[i]==nums[i-1]+1){
                count++;
                mx=max(mx,count);
            }
            else{
                count=1;
            }
        }
        return mx;
    }
};