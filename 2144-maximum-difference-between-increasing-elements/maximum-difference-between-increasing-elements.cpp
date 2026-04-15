class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int count = 0;
        int maxV = INT_MIN;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                count = nums[j]-nums[i];
                maxV = max(count, maxV);
            }
        }
        return (maxV<=0)? -1:maxV;
    }
};