class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int left=0;
        double mx=INT_MIN;
        double sum=0;
        for(int i=0;i<k;i++){    
            sum+=nums[i];
        }
        mx = max(sum, mx);
        for(int right = k; right < nums.size(); right++){
            sum+=nums[right];
            sum-=nums[left++];
            mx=max(sum,mx);
        }
        double avg=mx/k;

        return avg;
    }
};