class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mapping;
        vector<int> result;
        
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && st.top()<nums2[i]){
                mapping[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            mapping[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<nums1.size();i++){
            result.push_back(mapping[nums1[i]]);
        }
        return result;
    }
};