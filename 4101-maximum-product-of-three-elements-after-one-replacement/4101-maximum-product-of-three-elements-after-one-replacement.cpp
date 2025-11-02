class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        int a = nums[n];
        int b = nums[n - 1];
        long long ans=1LL*a*b*100000;
        return ans;
    }
};
