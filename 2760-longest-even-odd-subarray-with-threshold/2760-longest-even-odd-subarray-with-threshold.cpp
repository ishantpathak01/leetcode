class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int maxLen = 0;
        int currLen = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > threshold) {
                currLen = 0;
                continue;
            }
            if (currLen == 0) {
                if (nums[i] % 2 == 0)
                    currLen = 1;
            }
            else if ((nums[i] % 2) != (nums[i - 1] % 2)) {
                currLen++;
            }
            else {
                if (nums[i] % 2 == 0)
                    currLen = 1;
                else
                    currLen = 0;
            }
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};
