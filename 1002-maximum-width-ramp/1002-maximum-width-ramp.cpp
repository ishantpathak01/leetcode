class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> arr; // (value, index)

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        int minIndex = INT_MAX;
        for (auto &p : arr) {
            int idx = p.second;
            ans = max(ans, idx - minIndex);
            minIndex = min(minIndex, idx);
        }

        return ans;
    }
};
