class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result(n);
        int i = n - 1;
        result[i] = nums[i];
        i--;
        while (i >= 0) {
            result[i] = min(nums[i], result[i + 1]);
            i--;
        }
        int pref = nums[0];
        i = 0;
        while (i < n) {
            pref = max(pref, nums[i]);
            if (pref - result[i] <= k)
                return i;
            i++;
        }
        return -1;
    }
};