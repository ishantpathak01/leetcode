class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int ans = 1, cnt = 1, prev = 0, n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                cnt++;
            } else {
                prev = cnt;
                cnt = 1;
            }
            ans = max(ans, min(prev, cnt)); 
            ans = max(ans, cnt / 2); 
        }

        return ans;
    }
};