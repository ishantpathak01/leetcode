class Solution {
public:
    int longestBalanced(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); i++) {
            map<char, int> freq;
           for(int j=i;j<s.size();j++){
            freq[s[j]]++;

              int FREQ1=0;
              int FREQ2=INT_MAX;
              for(auto it:freq){
                FREQ1=max(FREQ1,it.second);
                FREQ2=min(FREQ2,it.second);
              }
              if(FREQ1==FREQ2){
               result = max(result, j - i + 1);
              }
            }
    }
            return result;
        }
    };