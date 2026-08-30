class Solution {
public:
    int countSpecialIntegers(vector<int>& A) {
        map<int, int>freq;
        int res = 0;
        for (int i = 0; i < A.size(); i++) {
            if (i == 0 || A[i] != A[i - 1]) {
                freq[A[i]]++;
            }
        }
        for (auto it : freq) {
            if (it.second == 1) {
                res++;
            }
        }
        return res;
    }
};