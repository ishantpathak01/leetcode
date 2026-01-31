class Solution {
public:
    string reverseByType(string s) {
        string letters = "";
        string special = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                letters += s[i];
            } else {
                special += s[i];
            }
        }
        string ans = "";
        int index1 = 0, index2 = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                ans += letters[index1];
                index1++;
            } else {
                ans += special[index2];
                index2++;
            }
        }
        
        return ans;
    }
};