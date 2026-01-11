class Solution {
public:
    int residuePrefixes(string s) {
        map<char,int>freq;
        int count=0;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            if(freq.size()==(i+1)%3){
                count++;
            }
        }
        return count;
    }
};