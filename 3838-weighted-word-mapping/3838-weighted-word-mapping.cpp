class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
          string result = "";
        for (const string  & word : words) {
            long long currWeight= 0;
            for (char c : word) {
                currWeight += weights[c - 'a'];
            }
            int modResult = currWeight % 26;
            char mappedChar = 'z' - modResult;
            result += mappedChar;
        }
        return result;
    }
};