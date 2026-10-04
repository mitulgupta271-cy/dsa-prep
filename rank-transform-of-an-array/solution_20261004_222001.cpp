class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums;
        map<int,int> rankMap;

        for(int x : arr){
            rankMap[x]=0;
        }
        int rank=1;
        for(auto &p : rankMap){
            p.second=rank;
            rank++;
        }
        for(int x : arr){
            nums.push_back(rankMap[x]);
        }

        return nums;
    }
};