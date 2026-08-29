class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int es=0;;
        int os=0;
        if(n==1) return nums[0];
        for(int i=0;i<n;i=i+2){
            es+=nums[i];
        }
        for(int i=1;i<n;i=i+2){
            os+=nums[i];
        }
        return (es-os);
    }
};