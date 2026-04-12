class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int>result= nums;
        int count = 0;
        for (int i=0;i<nums.size();i++) {
            if (nums[i] == 0 && digit == 0){
                count++;
            }
            while (nums[i] > 0) {
                if (nums[i] % 10 == digit){
                    count++;
                }
                nums[i] /= 10;
            }
        }
        return count;
    }
};