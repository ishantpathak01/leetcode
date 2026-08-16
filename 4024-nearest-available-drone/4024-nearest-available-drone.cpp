class Solution {

public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int min = INT_MAX;
        int ind = -1;
        for(int i = 0; i < drones.size(); i++) {
            int distance = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if(distance <= drones[i][2]) {
                if(distance < min) {
                    min = distance;
                    ind = i;
                }
            }
        }
        return ind;
    }
};