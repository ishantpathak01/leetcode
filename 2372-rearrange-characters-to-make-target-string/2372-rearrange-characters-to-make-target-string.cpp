class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> freqs;
        for(int i=0;i<s.size();i++){
            freqs[s[i]]++;
        }
        map<char,int>freqt;
        for(int i=0;i<target.size();i++){
            freqt[target[i]]++;
            
        }
        int ans=INT_MAX;
         for (char c : target) {
            int required = freqt[c];   
            int available = freqs[c];  
          ans = min(ans, available / required);
        }
        return ans;
    }
};