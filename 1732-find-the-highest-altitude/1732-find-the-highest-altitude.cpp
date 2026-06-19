class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int value=0;
        int max_value=0;
        for(int i=0;i<gain.size();i++){
            value=value+gain[i];
            if(value>max_value){
                max_value=value;
            }
        }
        return max_value;
    }
};