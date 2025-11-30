class Solution {
public:
    int maxDistinct(string s) {
        int count=0;
        map<char,int>freq;
        for(int i=0;i<s.size();i++){
        freq[s[i]]++;
        }
       for(auto it:freq){
        if(it.second>=1){
            count++;
        }
       }
       return count;
    }
};