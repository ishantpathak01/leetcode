class Solution {
public:
    bool checkPalindrome(string s, int a, int b) {
        while(a <= b) {
            if(s[a] != s[b]) {
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            for(int j = i; j < s.size(); j++) {
                if(checkPalindrome(s, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }
};