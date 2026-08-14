class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>freq;
        int i=0;
        int j=0;
        int n=s.size();
        int len=0;
        while(j<n){
            freq[s[j]]++;
            while(freq[s[j]] > 2){
                freq[s[i]]--;
                i++;
            }
        len=max(len,j-i+1);
        j++;
        }
        return len;
    }
};