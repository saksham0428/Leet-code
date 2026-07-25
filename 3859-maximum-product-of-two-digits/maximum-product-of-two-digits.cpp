class Solution {
public:
    int maxProduct(int n) {
        vector<int> num;
        int val=0;
        int m=0;
        while(n>0){
            val=n%10;
            num.push_back(val);
            n=n/10;
            m++;
        }
        sort(num.begin(),num.end());
        return num[m-1]*num[m-2];
    }
};