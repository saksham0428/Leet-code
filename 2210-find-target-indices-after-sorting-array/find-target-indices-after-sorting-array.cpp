class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]<target){
                low++;
            }
            else if(nums[i]==target){
                high++;
            }
        }
        for(int i=low;i<low+high;i++){
            ans.push_back(i);
        }
        return ans;
    }
};