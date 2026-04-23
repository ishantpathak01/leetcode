class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries,vector<string>& dictionary) {
        vector<string> result;
        for (int i = 0; i < queries.size(); i++) {
            for (int j = 0; j < dictionary.size(); j++) {
                int gap = 0;
                for (int k = 0; k < queries[i].size(); k++) {
                    if (dictionary[j][k] != queries[i][k]) {
                        gap++;
                    }
                }
                if (gap <= 2) {
                    result.push_back(queries[i]);
                    break;
                }
            }
        }
        return result;
    }
};