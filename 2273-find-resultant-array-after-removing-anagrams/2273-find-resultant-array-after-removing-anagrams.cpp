class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        map<char, int> prevFreq;
        for (string word : words) {
            map<char, int> currFreq;
            for (char c : word) {
                currFreq[c]++;
            }
            if (currFreq != prevFreq) {
                result.push_back(word);
                prevFreq = currFreq;
            }
        }
        return result;
    }
};
