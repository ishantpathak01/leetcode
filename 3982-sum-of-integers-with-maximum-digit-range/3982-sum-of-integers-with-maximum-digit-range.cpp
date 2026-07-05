class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int maxx = 0;
            int num = nums[i];
            int minn = INT_MAX;
            while (num > 0) {
                int digit= num % 10;
                maxx = max(maxx, digit);
                minn = min(minn, digit);
                num = num / 10;
            }
            ans = max(ans, maxx - minn);
            result.push_back(maxx - minn);
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (result[i] == ans) {
                sum += nums[i];
            }
        }
        return sum;
    }
};