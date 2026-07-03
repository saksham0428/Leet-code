class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (int n:nums) mp[n]++;
        vector<int> res;
        for (auto &p:mp) {
            if (p.second==1)
                res.push_back(p.first);
        }
        return res;
    }
};