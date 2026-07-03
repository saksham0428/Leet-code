class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        char ans;
        for(char c:t){
            mp[c]++;
        }

        for(char c:s){
            mp[c]--;
        }
        for(auto x:mp){
           if(x.second==1) 
          ans=  x.first;
        }
        return ans;
    }
};