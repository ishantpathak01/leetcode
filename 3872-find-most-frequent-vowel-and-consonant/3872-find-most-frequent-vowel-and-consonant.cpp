class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c); 
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxFreqSum(string s) {
        unordered_map<char,int> freqV, freqC;
        int maxV = 0, maxC = 0;

        for (char c: s) {
            if (isVowel(c)) {
                freqV[c]++;
                maxV = max(maxV, freqV[c]);
            } else {
                freqC[c]++;
                maxC = max(maxC, freqC[c]);
            }
        }

        return maxV + maxC;
    }
};
