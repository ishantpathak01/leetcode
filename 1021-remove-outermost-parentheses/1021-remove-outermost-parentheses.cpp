class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        int rem = 0;
        for (char c : s) {
            if (c == '(') {
                if (rem > 0) {
                    res += c;
                }
                rem++;
            } else {
                rem--;
                if (rem > 0) {
                    res += c;
                }
            }
        }
        return res;
    }
};