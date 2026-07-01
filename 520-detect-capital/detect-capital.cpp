class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        int n = word.length();

        for(int i=0;i<=n;i++){
            if(isupper(word[i])){
                count+= 1;
            }
        }
            cout<<n<<endl;
            cout<<count;
            if(count==n) return true;

            if(count==1 && isupper(word[0])) return true;

            if(count==0) return true;

        return false;
    }
};