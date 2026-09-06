class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int mid = n / 2;
        int ans = 0;
        long long total = 0;
        long long sum1 = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
            if (i < mid) {
                sum1 += nums[i];
            }
        }
        for (int i = 0; i < n; i++) {
            long long sum2 = total - sum1;
            if (sum1 > sum2) {
                ans++;
            }
            int add = (i + mid) % n;
            sum1 += nums[add];
            sum1 -= nums[i];
        }
        return ans;
    }
};