class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int left=0;
        int count=0;
        int mx=0;
        for(int i:nums){
            st.insert(i);
        }
        for(auto i:st){
            if (!st.contains(i-1)){
                count=1;
                left=i;
                while(st.contains(left+1)){
                    count++;
                    left++;
                }
                mx=max(mx,count);
            }
        }
        return mx;
    }
};