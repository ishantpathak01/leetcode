class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int result = 0;
        for (int i = 0;i < s.size();i++) {
            int zeros = 0, ones = 0;
            for (int j = i; j < s.size(); j++) {
                if (s[j] == '0'){
                    zeros++;
                } 
                else {
                    ones++;
                    }
                if (zeros<= k|| ones <= k) {
                    result++;
                } else {
                    break;
                }
            }
        }
        return result;
    }
};