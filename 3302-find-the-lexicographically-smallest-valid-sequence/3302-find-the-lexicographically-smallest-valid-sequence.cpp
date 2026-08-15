class Solution {
public:
    vector<int> validSequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> right(m);
        int j = m - 1;
        for (int i = n - 1; i >= 0 && j >= 0; i--) {
            if (s[i] == t[j]) {
                right[j] = i;
                j--;
            }
        }
        vector<int> ans;
        j = 0;
        bool changed = false;
        for (int i = 0; i < n && j < m; i++) {
            if (s[i] == t[j]) {
                ans.push_back(i);
                j++;
            }
            else if (!changed) {
                if (j == m - 1 || right[j + 1] > i) {
                    ans.push_back(i);
                    j++;
                    changed = true;
                }
            }
        }
        if (j == m)
            return ans;
        return {};
    }
};