class Solution {
public:
    int mirrorDistance(int n) {
        if(n<=9) return 0;
        int rev=0;
        int og=n;
        while(n){
            int nums=n%10;
            rev=rev*10+nums;
            n/=10;
        }
        return abs(og-rev);
    }
};