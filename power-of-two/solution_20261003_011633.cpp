class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        if(n<=0){
            return false;
        }
        return (n & (n-1))==0;
    }
};