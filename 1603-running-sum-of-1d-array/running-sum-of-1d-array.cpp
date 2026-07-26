class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> gg;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            gg.push_back(sum);
        }
        return gg;
    }
};