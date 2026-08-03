class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int y = 0;
            int x = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0)
                    y++;
                else
                    x++;
                if (x > 0 && 1LL * b * y <= 1LL * a * x)
                    ans++;
            }
        }
        return ans;
    }
};