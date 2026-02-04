class Solution {
public:
    int similarPairs(vector<string>& words) {
        set<char> one, two;
        int count = 0;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                string str1 = words[i];
                string str2 = words[j];
                for (int k = 0; k < str1.length(); ++k) {
                    one.insert(str1[k]);
                }
                for (int k = 0; k < str2.length(); ++k) {
                    two.insert(str2[k]);
                }
                if (one == two) {
                    count++;
                }
                one.clear();
                two.clear();
            }
        }
        return count;
    }
};