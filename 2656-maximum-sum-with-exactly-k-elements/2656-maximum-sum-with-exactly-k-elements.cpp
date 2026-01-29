class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int sum = 0;
        while (k>0) {
            sum += maxVal;
            maxVal++;
            k--;
        }

        return sum;
    }
};
