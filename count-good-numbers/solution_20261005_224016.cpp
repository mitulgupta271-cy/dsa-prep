class Solution {
public:
    long long power(long long base,long long exp,long long mod){
        long long ans=1;
        while(exp>0){
            if(exp%2==1){
                ans=(ans*base) % mod;
            }
            base=(base*base) % mod;
            exp/=2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long mod=1000000007;
        long long ans=power(20,n/2,mod);
        if(n%2==1){
            ans=(ans*5)%mod;
        }
        return ans;
    }
};