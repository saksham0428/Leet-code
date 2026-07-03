class Solution {
public:
    bool isPalindrome(int x) {
        long long numrev=0;
        int num=x;

        if(x<0) return false;

        while(x>0){
            int temp=x%10;
            numrev=(numrev*10) +temp;
            x=x/10;
        }
        if(num==numrev) return true;

        return false;
    }
};