class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();

        int maxx=nums[n-3]*nums[n-2]*nums[n-1];
        int min=nums[0]*nums[1]*nums[n-1];
        int ans=max(min,maxx);
        return ans;
    }
};