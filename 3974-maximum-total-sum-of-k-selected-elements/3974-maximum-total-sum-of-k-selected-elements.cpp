class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        vector<int> result;
        long long sum = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(nums[i]);
        }
        int m = min(k, mul - 1);
        for (int i = 0; i < m; i++) {
            sum += 1LL * result[i] * (mul - i);
        }
        for (int i = m; i < k; i++) {
            sum += result[i];
        }
        return sum;
    }
};