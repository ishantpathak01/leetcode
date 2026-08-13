class Solution {
public:
    int partitionString(string s) {
        int str[26] = {};
        int partitions = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++) {
            if (str[s[i] - 'a'] >= last) {
                partitions++;
                last = i + 1;
            }
            str[s[i] - 'a'] = i + 1;
        }
        return partitions;
    }
};