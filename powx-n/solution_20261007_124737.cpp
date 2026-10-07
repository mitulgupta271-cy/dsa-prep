class Solution {
public:
    double myPow(double x, int n) {
        double base = x;
        double ans=1;
        if(base==1){
            return ans;
        }
        long long exp=abs((long long) n);
            while(exp>0){
                if(exp%2==1){
                    ans=ans*base;
                }
                
                exp=exp/2;
                base=base*base;
                
            }
        if(n<0){
            ans=1/ans;
        }
        return ans;
    }
};