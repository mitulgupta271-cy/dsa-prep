class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(int as:asteroids){
            bool alive = true;
            while(!st.empty() && st.top()>0 && as<0){
                if(abs(as)<st.top()){
                    alive=false;
                    break;
                }
                else if(abs(as)>st.top()){
                    st.pop();
                }
                else if(abs(as)==st.top()){
                    st.pop();
                    alive=false;
                    break;
                }
            }
            if(alive){
                st.push(as);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};