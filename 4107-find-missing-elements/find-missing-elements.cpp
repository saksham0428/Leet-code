class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_set <int> st(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[n-1];

        vector<int> gg;
        for(int i=min+1;i<max;i++){
            if(!st.contains(i)){
                gg.push_back(i);
            }
        }
        return gg;
    }
};