class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int maxp=0;

        for(int pri:prices){
            if(pri<minp){
                minp=pri;
            }
            else{
                maxp=max(maxp,pri-minp);
            }
        }
        return maxp;

    }
};