class Solution {
    public int maximizeSum(int[] nums, int k) {
       int maxVal = Integer.MIN_VALUE;
        for (int num : nums) {
            maxVal = Math.max(maxVal, num);
        }
        int sum = 0;
        while (k>0) {
            sum += maxVal;
            maxVal++;
            k--;
        }

        return sum;
    }
}