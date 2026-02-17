class Solution {
    public double minimumAverage(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length - 1;
        double min_avg = Double.MAX_VALUE;
        for (int i = 0; i < nums.length / 2; i++) {
            double avg = (nums[i] + nums[n]) / 2.0;
            min_avg = Math.min(min_avg, avg);
            n--;
        }
        return min_avg;
    }
}