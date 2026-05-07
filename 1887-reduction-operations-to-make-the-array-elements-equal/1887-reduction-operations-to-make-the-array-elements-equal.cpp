class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int sum = 0;
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i - 1] != nums[i]) {
                sum += nums.size() - i;
            }
        }
        return sum;
    }
};