class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k, 0);
        vector<long long> result(k, 0);
        for (int num : nums) {
            vector<long long> final(k, 0);
            int x = num % k;
            final[x]++;
            for (int r = 0; r < k; r++) {
                int newR = (r * x) % k;
                final[newR] += result[r];
            }
            for (int r = 0; r < k; r++) {
                ans[r] += final[r];
            }
            result = final;
        }
        return ans;
    }
};