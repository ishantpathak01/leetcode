class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int count=0;
        for(int i=0;i<weight.size()-1;i++){
            if(weight[i]>weight[i+1]){
                count++;
                i++;
            }
        }
        return count;
    }
};