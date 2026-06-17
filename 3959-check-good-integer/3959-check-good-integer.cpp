class Solution {
public:
    bool checkGoodInteger(int n) {
        long long square = 0;
        long long sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r;
            square += (r * r);
            n /= 10;
        }
        return square - sum >= 50;
    }
};