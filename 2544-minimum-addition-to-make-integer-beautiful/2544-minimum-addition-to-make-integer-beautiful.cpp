class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long original = n;
        long long mul = 1; 
        while (true) {
            long long temp = n, sum = 0;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum <= target) break;
            n = ((n / (mul * 10)) + 1) * (mul * 10);
            mul *= 10;
        }

        return n - original;
    }
};
