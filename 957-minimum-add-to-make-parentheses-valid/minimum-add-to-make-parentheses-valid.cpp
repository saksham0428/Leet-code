class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int req=0;
        for(int i=0;i<s.size();i++){
            char curr=s[i];
            if(curr=='('){
                st.push(curr);
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    req++;
                }

            }

        }
        return st.size()+req;
    }
};