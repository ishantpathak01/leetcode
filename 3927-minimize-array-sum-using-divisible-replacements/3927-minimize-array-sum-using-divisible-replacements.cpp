class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<int> result;
        long long ans = 0;
        for (int ele : nums) {
            int minn = ele;
            for (int i = 1; i * i <= ele; i++) {
                if (ele % i != 0)
                    continue;
                int other = ele / i;
                if (result.count(i)) {
                    minn = min(minn, i);
                }
                if (result.count(other)) {
                    minn = min(minn, other);
                }
            }
            ans += minn;
            result.insert(ele);
        }
        return ans;
    }
};