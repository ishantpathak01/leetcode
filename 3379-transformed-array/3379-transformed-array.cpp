class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int move = nums[i] % n;
            int newIndex = (i + move + n) % n;
            ans[i] = nums[newIndex];
        }
        return ans;
    }
};