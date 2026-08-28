class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i = 0;
        for(i=0; i<nums.size(); i++){
            int key = k*(i+1);
            if(! ranges::contains(nums, key)){
                return key;
            }
        }
        return k*(i+1);
    }
};