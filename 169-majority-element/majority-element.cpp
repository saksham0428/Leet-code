class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size()/2;
        for(int i:nums) m[i]++;
        for(auto i:m){
            if(i.second>n)
            return i.first;
        }
        return -1;

    }
};