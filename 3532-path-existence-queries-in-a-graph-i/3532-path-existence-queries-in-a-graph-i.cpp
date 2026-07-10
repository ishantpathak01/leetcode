class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int>result(n);
        int value = 0;
        result[0] = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] > maxDiff)
                value++;
            result[i] = value;
        }
        vector<bool>ans;
        for (auto &k : queries) {
            ans.push_back(result[k[0]] == result[k[1]]);
        }
        return ans;
    }
};