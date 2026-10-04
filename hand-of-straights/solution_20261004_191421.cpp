class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize !=0){
            return false;
        }
        map<int,int> freq;
        for(int i=0;i<hand.size();i++){
            freq[hand[i]]++;
        }

        while(!freq.empty()){
            int currentKey=freq.begin()->first;

            for(int i=1;i<groupSize;i++){
                if(freq.find(currentKey+i)==freq.end() ){
                    return false;
                }
            }
            for(int i=0;i<groupSize;i++){
                freq[currentKey+i]--;
                if(freq[currentKey+i]==0){
                    freq.erase(currentKey+i);
                }
            }
            

        }
        return true;
    }
};