class Solution {
    public int searchInsert(int[] nums, int target) {
        int j = nums.length;
        int k;
        for (int i = 0; i <= j - 1; i++) {
            if (nums[i] == target) {
                return i;
            }
            if (nums[i] > target) {
                return i;
            }
        }
        return j;

    }
}