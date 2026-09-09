class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums) mp[i]++;
        int ans=0;
        for(auto x:mp){
            if(x.second>1){
                ans=x.first;
            }
        }
        return ans;
    }
};