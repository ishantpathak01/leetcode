class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        map<char, int> begin, end;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (begin.find(c) == begin.end()) {
                begin[c] = i;
            }
            end[c] = i;
        }
        vector<pair<int, int>> result;
        for (auto it : begin) {
            char c = it.first;
            int left = begin[c];
            int right = end[c];
            int i = left;
            while (i <= right) {
                if (begin[s[i]] < left) {
                    break;
                }
                right = max(right, end[s[i]]);
                i++;
            }
           if (i > right) {
                result.push_back({right, left});
            }
        }
        sort(result.begin(), result.end());
        vector<string> ans;
        int endd = -1;
        for (int i = 0; i < result.size(); i++) {
            int right = result[i].first;
            int left = result[i].second;
            if (left > endd) {
                string len = s.substr(left, right - left + 1);
                ans.push_back(len);
                endd = right;
            }
        }
        return ans;
    }
};