class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int left=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int k=0;k<nums.size();k++){
            while(j <k){
                left+=nums[j];
                j++;
            }
            int right=sum-left-nums[k];
            cout<<k<<endl;
            if(right==left) return k;
        }


        return -1;
    }
};