class Solution {
public:
    bool checkValidString(string s) {
        int min=0;
        int max=0;

        for(char c:s){
            if(c=='('){
                min++;
                max++;
            }
            else if(c==')'){
                if(min>0){
                min--;
                }
                max--;
            }
            else if(c=='*'){
                max=max+1;
                if(min>0){
                    min=min-1;
                }
            }
            if(max<0){
                return false;
            }
        }
        return (min==0);
    }
};