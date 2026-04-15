class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        map<int,int> mp;
        int k=0;
        for(int i=0;i<m;i++){
            mp[nums1[i]]++;
        }
        for(int j=0;j<n;j++){
            mp[nums2[j]]++;
        }

        for(auto it:mp){
            int v=it.first;
            int f=it.second;
            while(f--){
                nums1[k++]=v;
            }
        }
    }
};