class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int count = 0;
        int val1 = capacityA;
        int val2 = capacityB;
        int i = 0;
        int j = plants.size() -1;
        while (i < j) {
            if (val1 <plants[i]) {
                count++;
                val1 =capacityA;
             }
            val1 -=plants[i];
            i++;
            if (val2 <plants[j]) {
                count++;
                val2 =capacityB;
            }
            val2 -= plants[j];
            j--;
        }
        if (i == j) {
            if (max(val1, val2) < plants[i]) {
                count++;
            }
        }
        return count;
    }
};