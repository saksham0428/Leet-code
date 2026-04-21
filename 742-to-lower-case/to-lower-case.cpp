class Solution {
public:
    string toLowerCase(string s) {
        string st="";
        for(char c:s){
            st+=tolower(c);
        }
        return st;
    }
};