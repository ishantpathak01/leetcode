class Solution {
    public int countDigitOccurrences(int[] nums, int digit) {
         int rem = 0;
        int count  = 0;
        for(int i=0;i<nums.length;i++){
            while(nums[i] > 0)
            {
                rem = nums[i]%10;
                if(rem == digit)
                    count++;
                nums[i] /= 10;
            }
        }
        return count;
    }
}