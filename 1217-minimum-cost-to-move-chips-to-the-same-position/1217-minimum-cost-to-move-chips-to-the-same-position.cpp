class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int count1=0,count2=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2==0){
                count1++;
            }
            else{
                count2++;
            }
        }
        return min(count1,count2);
    }
};