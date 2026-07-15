class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1 = 0;
        int sum2 = 0;
         for (int i = 0; i < n; i++) {
            sum2 += 2 * i + 1;
        }
        for (int i = 0; i < n; i++) {
            sum1 += 2 * (i + 1);
        }
        int minSum = min(sum1, sum2);
        for (int i = minSum; i >=1; i--) {
            if (sum1 % i == 0 && sum2 % i == 0) {
                return i;
            }
        }
        return 1;
    }
};