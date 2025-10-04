class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left = 0;
        int minlength = -1;
        int sum = 0;
        int total = 0;
        for (int num : nums)
            total += num;
        int target = total - x;
        if (target < 0)
            return -1;
        if (target == 0)
            return nums.size();
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum > target && left <= right) {
                sum -= nums[left];
                left++;
            }
            if (sum == target) {
                minlength = max(minlength, right - left + 1);
            }
        }
        if( minlength == -1) {
            return -1;
        } else {
            return nums.size() - minlength;
        }
    }
};
