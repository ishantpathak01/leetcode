class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long sum = 0;
        vector<long long> arr(nums.size());
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
            sum += nums[i] + maxi;
            arr[i] = sum;
        }
        return arr;
    }
};