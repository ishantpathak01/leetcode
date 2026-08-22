class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxLength = 0;
        int index = 0;
        auto checkpalindrome= [&](int i, int j) {
            while (i < j) {
                if (s[i] != s[j]) {
                    return false;
                }
                i++;
                j--;
            }
            return true;
        };
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (checkpalindrome(i, j)) {
                    int length = j - i + 1;
                    if (length > maxLength) {
                        maxLength = length;
                        index = i;
                    }
                }
            }
        }
        return s.substr(index, maxLength);
    }
};