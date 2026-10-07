class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long exp=abs((long long) n);
            while(exp>0){
                if(exp%2==1){
                    ans=ans*x;
                }
                
                exp=exp/2;
                x=x*x;
                
            }
        if(n<0){
            ans=1/ans;
        }
        return ans;
    }
};