class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int j = -1;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                j = i;
                break;
            }
        }
        if (j == -1) return word;
        for (int i = j; i >= 0; i--) {
            ans += word[i];
        }
        for (int i = j + 1; i < word.size(); i++) {
            ans += word[i];
        }

        return ans;
    }
};
