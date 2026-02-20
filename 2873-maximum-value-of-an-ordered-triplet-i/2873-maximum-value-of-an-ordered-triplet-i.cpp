class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxVal=nums[0];
        long long maxDiff =0;
        long long ans=0;
        for (int k=1;k<nums.size();k++) {
            ans = max(ans,maxDiff * nums[k]);
            maxDiff =max(maxDiff,maxVal - nums[k]);
            maxVal =max(maxVal,(long long)nums[k]);
        }
        return ans;
    }
};