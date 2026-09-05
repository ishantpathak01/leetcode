class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> result;
        for (char c : s) {
            if (!result.empty() && result.back().first == c) {
                result.back().second++;
                if (result.back().second == k) {
                    result.pop_back();
                }
            } else {
                result.push_back({c, 1});
            }
        }
        string ans = "";
        for (auto it : result) {
            ans += string(it.second, it.first);
        }
        return ans;
    }
};
