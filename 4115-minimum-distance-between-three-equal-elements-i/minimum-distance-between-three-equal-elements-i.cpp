class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int m=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        int val=abs(i - j) + abs(j - k) + abs(k - i);
                        m=min(val,m);
                    }
                }
            }
        }
        if(m==INT_MAX) return -1;
        return m;
    }
};