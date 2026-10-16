class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target=1;
        for(int i:nums){
            if(i<target) continue;
            if(target==i)
            target++;
            else if(target<i){
                return target;
            }
        }
        return target;
    }
};