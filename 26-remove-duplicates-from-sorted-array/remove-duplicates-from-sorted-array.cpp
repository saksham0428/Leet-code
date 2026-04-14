class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        int ans=0;
        for(int i:nums){
            m[i]++;
        }
        for(auto j:m){
            nums[ans++]=j.first;
        }
        return m.size();
    }
};