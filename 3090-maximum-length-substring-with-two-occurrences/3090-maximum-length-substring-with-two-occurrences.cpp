class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int len = 0;

        for (int i = 0; i < n; i++) {
            int freq[256] = {0};

            for (int j = i; j < n; j++) {
                freq[s[j]]++;

                if (freq[s[j]] > 2) {
                    break;
                }

                len = max(len, j - i + 1);
            }
        }

        return len;
    }
};