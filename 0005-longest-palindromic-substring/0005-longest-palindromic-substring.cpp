class Solution {
public:

    bool checkpalindrome(const string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int maxlength = 0;
        int index = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {

                if (checkpalindrome(s, i, j)) {

                    int length = j - i + 1;

                    if (length > maxlength) {
                        maxlength = length;
                        index = i;
                    }
                }
            }
        }

        return s.substr(index, maxlength);
    }
};