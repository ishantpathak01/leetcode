class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long maxx = *max_element(nums.begin(), nums.end());
        long long count = 0;
        long long ans = 0;
        int l = 0;
        int r = 0;
        while(r < nums.size()) {
            if(nums[r] == maxx) {
                count++;
            }
            while(count >= k) {
                if(nums[l] == maxx) {
                    count--;
                }
                ans += nums.size() - r;
                l++;
            }
            r++;
        }
        return ans;
    }
};