class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int left=0;
        int right=0;
        int mx=0;

        for(right;right<s.size();right++){
            while(st.contains(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            mx=max(mx,right-left+1);
        }

        return mx;
    }
};