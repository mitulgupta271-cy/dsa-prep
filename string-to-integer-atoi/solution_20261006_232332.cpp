class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();

        while(i<n && s[i]==' '){
            i++;
        }

        int sign = 1;
        int count = 0;
        while(i<n && (s[i]=='+' || s[i]=='-')){
            count+=1;
            if(count==1){
                if(s[i]=='-'){
                    sign = -1;
                }
            }
            else{
                return 0;
            }
            i++;
        }

        long long ans = 0;
        while(i<n && (s[i]>='0' && s[i]<='9')){
            int digit=s[i]-'0';
            if((ans*10+digit)*sign>INT_MAX){
                return INT_MAX;
            }
            else if((ans*10+digit)*sign<INT_MIN){
                return INT_MIN;
            }
            else{
                ans=ans*10+digit;
            }
            i++;
        }
        return ans*sign;
    }
};