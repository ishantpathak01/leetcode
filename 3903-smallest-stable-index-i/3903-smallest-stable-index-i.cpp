class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max = nums[0];
        int ans = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(max < nums[i]) {
                max = nums[i];
            }
            int min = INT_MAX;
            for(int j = i; j < nums.size(); j++) {
                if(min > nums[j]) {
                    min = nums[j];
                }
            }
            if(max - min <= k) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};