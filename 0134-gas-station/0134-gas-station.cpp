class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0, tank = 0, start = 0;
        for (int i = 0; i < gas.size(); i++) {
            total += gas[i] - cost[i];   // overall gas balance
            tank  += gas[i] - cost[i];   // current trip balance
            if (tank < 0) {              // if can't reach next station
                start = i + 1;           // next station might be start
                tank = 0;                // reset tank
            }
        }
        return total < 0 ? -1 : start;   // check feasibility
    }
};
