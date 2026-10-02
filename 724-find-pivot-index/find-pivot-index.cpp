class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int sum=0;
        for(int i:nums){
            sum+=i;
        }

        for(int j=0;j<nums.size();j++){
            if(sum-left-nums[j]==left) return j;
            left+=nums[j];
        }
        cout<<sum<<endl;

        return -1;
        
    }
};