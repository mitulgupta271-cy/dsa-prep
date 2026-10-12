class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int ans=0;
        int high=x;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(1LL*mid*mid==x){
                ans=mid;
                break;
            }
            else if(1LL*mid*mid<x){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};