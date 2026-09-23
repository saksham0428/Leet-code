class Solution {
    public int maxProfit(int[] prices) {
        int minp=Integer.MAX_VALUE;
        int maxp=0;

        for(int pri:prices){
            if(pri<minp){
                minp=pri;
            }

            else{
                maxp=Math.max(maxp,pri-minp);
            }
        }
        return maxp;
    }
}