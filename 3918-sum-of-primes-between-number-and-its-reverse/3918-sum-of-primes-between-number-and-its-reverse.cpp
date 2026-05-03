class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int val = n;
        int r = 0;
        int temp = n;
        while (temp > 0) {
            int last = temp % 10;
            r = r * 10 + last;
            temp /= 10;
        }

        int start = min(val, r);
        int end = max(val, r);
        int sum = 0;
        for (int i = start; i <= end; i++) {
            int count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            if (count == 2) {
                sum += i;
            }
        }

        return sum;
    }
};