class Solution {
public:
    int strStr(string haystack, string needle) {
        char j = needle[0];
        int m = haystack.size();
        int n = needle.size();
        int count = 0;
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i] == j){
                int hindx = i;
                int nindx = 0;
                while(hindx<m && nindx<n && haystack[hindx] == needle[nindx]){
                    count++;
                    hindx++;
                    nindx++;
                }
                if (count == n) return i;
                count=0;
            }
        }
        return -1;
    }
};