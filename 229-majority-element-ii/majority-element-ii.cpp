class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size()/3;
        vector<int> gg;
        for(int i:nums) mp[i]++;
        for(auto i:mp){
            if(i.second>n){
                gg.push_back(i.first);
            }
        }

        return gg;
    }
};