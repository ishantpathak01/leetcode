class Solution {
public:
    bool isAnagram(string a, string b) {
        if (a.length() != b.length())
            return false;
        vector<int> freq(26, 0);
        for (int i = 0; i < a.length(); i++) {
            freq[a[i] - 'a']++;
        }
        for (int i = 0; i < b.length(); i++) {
            freq[b[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int k = s1.length();
        for (int i = 0; i + k <= s2.length(); i++) {
            string temp = s2.substr(i, k);
            if (isAnagram(temp, s1))
                return true;
        }
        return false;
    }
};