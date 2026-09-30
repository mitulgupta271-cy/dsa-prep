class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int count=0;
        int l=0,r=0;

        while(l!=g.size() && r!=s.size()){
            if(s[r]>=g[l]){
                count++;
                l++;
                r++;
            }
            else if(s[r]<g[l]){
                r++;
            }
            
    }
    return count;
    }
};