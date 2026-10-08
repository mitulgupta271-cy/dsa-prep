class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i=0;
        while(i<nums1.size()){
            int key=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    key=nums2[j];
                    bool found = false;
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>key){
                            result.push_back(nums2[k]);
                            found = true;
                            break;
                        }
                    }
                        if(!found){
                            result.push_back(-1);
                            }
                    
                }
            }
            i++;
        }
        return result;
    }
};