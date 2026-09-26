class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;
        for (int i = 0; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        string result = "";
        int i = 0;
        int n = s.size();
        while (i < n) {
            if (s[i] == '(') {
                int j = s.find(')', i + 1);
                string temp = s.substr(i + 1, j - i - 1);
                if (mp.count(temp)) {
                    result += mp[temp];
                }
                else {
                    result += "?";
                }
                i = j + 1;
            }
            else {
                result += s[i];
                i++;
            }
        }
        return result;
    }
};