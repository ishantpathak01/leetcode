class Solution {
public:
    bool checkpalindrome(string s, int a, int b) {
        while(a < b) {
            if(s[a] != s[b]) {
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int count = 0;
        int i = 0;
        while(i < s.size()) {
            if(i + k <= s.size() && checkpalindrome(s, i, i + k - 1)) {
                count++;
                i = i + k;
            }
            else if(i + k + 1 <= s.size() && 
                    checkpalindrome(s, i, i + k)) {
                count++;
                i = i + k + 1;
            }
            else {
                i++;
            }
        }
        return count;
    }
};