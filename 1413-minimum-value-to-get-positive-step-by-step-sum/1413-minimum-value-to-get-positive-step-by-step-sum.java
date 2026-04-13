class Solution {
    public int minStartValue(int[] nums) {
        int Sum = 0;
        int min = 0;
        for (int num : nums) {
            Sum += num;
            if (Sum< min) {
                min =Sum;
            }
        }
        return 1 - min;
    }
}