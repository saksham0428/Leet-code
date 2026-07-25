class Solution {
public:
    int maxProduct(int n) {
        vector<int> num;
        int val=0;
        while(n>0){
            val=n%10;
            num.push_back(val);
            n=n/10;
        }
        int m=num.size();
        sort(num.begin(),num.end());
        int ans=num[m-1]*num[m-2];

        return ans;
    }
};