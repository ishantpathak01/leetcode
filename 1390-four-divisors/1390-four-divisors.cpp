class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int count = 0;
            int sum = 0;
            for (int j = 1; j * j <= n; j++) {
                if (n % j == 0) {
                    int value1 = j;
                    int value2 = n / j;
                    if (value1 == value2) {
                        count++;
                        sum += value1;
                    } else {
                        count += 2;
                        sum += value1 + value2;
                    }
                    if (count > 4)
                     break;
                }
            }
            if (count == 4) {
                totalsum += sum;
            }
        }
        return totalsum;
    }
};
