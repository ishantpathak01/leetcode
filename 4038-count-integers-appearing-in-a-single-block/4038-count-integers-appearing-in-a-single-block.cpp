class Solution {
public:
    int countSpecialIntegers(vector<int>& A) {
        map<int, int> mp;
        int res = 0;
        for (int i = 0; i < A.size(); i++) {
            if (i == 0 || A[i] != A[i - 1]) {
                mp[A[i]]++;
            }
        }
        for (auto it : mp) {
            if (it.second == 1) {
                res++;
            }
        }
        return res;
    }
};