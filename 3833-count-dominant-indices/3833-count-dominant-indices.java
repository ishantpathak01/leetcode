class Solution {
    public int dominantIndices(int[] nums) {
        int count1 = 0;
        for (int i = 0; i < nums.length; i++) {
            int sum = 0;
            int count = 0;
            for (int j = i + 1; j < nums.length; j++) {
                sum += nums[j];
                count++;
            }
            if (count == 0) continue;
            int avg = sum / count;
            if (nums[i] > avg) {
                count1++;
            }
        }
        return count1;
    }
}
