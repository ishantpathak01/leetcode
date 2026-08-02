class Solution {
public:
    long long maxPairStrength(const vector<int>& nums) {
        long long res = 1;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                long long g = gcd(nums[i], nums[j]);
                long long a = nums[i] / g;
                long long b = nums[j] / g;
                res = max(res, a * b);
            }
        }
        return res;
    }
};