class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count1 = 0;
        for (int num : nums) {
            if (num % 3 == 1) count1++;
            else if (num % 3 == 2) count1++;
        }
        return count1;
    }
};