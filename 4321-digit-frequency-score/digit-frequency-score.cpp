class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        while(n){
            int m=n%10;
            sum+=m;
            n=n/10;
        }
        return sum;
    }
};