    class Solution {
    public:
        bool isPalindrome(int n) {
            long long numrev=0;
            int fake=n;
            if(n<0) return false;
            while(n>0){
            int temp=n%10;
            numrev=(numrev*10)+temp;
            n=n/10;
            }
            if(numrev==fake){
                return true;
            }
            else {
                return false;
            }
        }
    };