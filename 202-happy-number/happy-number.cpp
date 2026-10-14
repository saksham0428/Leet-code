class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        while(true){
            int sum=0;
            while(n!=0){
                sum+=pow(n%10,2);
                n=n/10;
            }
            if(sum==1) return true;
            n=sum;
            if(st.contains(n)){
                return false;
                }
            st.insert(n);
        }
        return true;
    }
};