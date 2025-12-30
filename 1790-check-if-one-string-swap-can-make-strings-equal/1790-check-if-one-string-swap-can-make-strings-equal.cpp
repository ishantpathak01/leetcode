class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        map<int, int> freq1, freq2;
        for (auto i : s1) {
            freq1[i]++;
        }
        for (auto j : s2) {
            freq2[j]++;
        }
        int count = 0;
        int j=0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[j]) {
                count++;
            }
            j++;
        }
        if (freq1 == freq2) {
             if (count == 0 || count == 2)
                return true;
        }
        return false;
    }
};