class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> gg=heights;
        int n=gg.size();
        sort(gg.begin(),gg.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=gg[i]){
                count+=1;
            }
        }
        return count;
    }
};