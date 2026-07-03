class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        int ans=0;
        for(int i:nums){
            mp[i]++;

        }
        for(auto x:mp){
            if(x.second==1){
                ans=x.first;
            } 
        }
        return ans;
    }
};