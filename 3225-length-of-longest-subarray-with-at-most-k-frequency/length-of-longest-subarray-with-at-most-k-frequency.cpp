class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=-1 , ans=0;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                l++;
                mp[nums[l]]--;
            }
            ans=max(ans,i-l);
        }
        return ans;
    }
};