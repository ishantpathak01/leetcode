class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n = cost.size();
        int count = 0;
        int sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            count++;
            if (count == 3) {
                count = 0;  
                continue; 
            }
            sum += cost[i]; 
        }

        return sum;
    }
};