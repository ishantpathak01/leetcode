
class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> lower;
        set<char> upper;
        for (char ch : word) {
            if (islower(ch)) {
                lower.insert(ch);
            } else if (isupper(ch)) {
                upper.insert(tolower(ch)); 
            }
        }

        int count = 0;
        for (char ch : lower) {
            if (upper.count(ch)) {
                count++;
            }
        }

        return count;
    }
};
