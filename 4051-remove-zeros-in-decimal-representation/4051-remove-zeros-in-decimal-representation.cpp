class Solution {
public:
    long long removeZeros(long long n) {
        long long result = 0;
        long long mult = 1;
        while (n > 0) {
            int last = n % 10;
            if (last != 0) {
                result = result+mult * last;
                mult = mult * 10;
            }
            n=n/10;
        }
    return result;
}
}
;