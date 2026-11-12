class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increa = 1;
        int decrea = 1;
        int result = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1]) {
                increa++;
                decrea = 1;
            }
            else if(nums[i] < nums[i-1]) {
                decrea++;
                increa = 1;
            }
            else {
                increa = 1;
                decrea = 1;
            }
            result = max(result, max(increa, decrea));
        }
        return result;
    }
};