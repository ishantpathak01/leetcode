class Solution {
public:
    int minOperations(string s) {
        int n = s.size() ;
        int first = 0 ;
        int second = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && s[i] == '0'){
                first++;
            }
            if (i % 2 == 1 && s[i] == '1'){
                first++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i % 2 == 1 && s[i] == '0'){
                second++;
            }
            if (i % 2 == 0 && s[i] == '1'){
                second++;
            }
        }
        return min(first, second);
    }
};