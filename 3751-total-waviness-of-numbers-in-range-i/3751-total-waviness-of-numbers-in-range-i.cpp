class Solution {
public:
    int totalWaviness(int num1, int num2) {
        long long ans = 0;
        for (int x = num1; x <= num2; x++) {
            string s = to_string(x);
            if (s.size() < 3) continue;
            for (int i = 1; i < s.size() - 1; i++) {
                if ((s[i] > s[i-1] && s[i] > s[i+1]) || 
                    (s[i] < s[i-1] && s[i] < s[i+1])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
