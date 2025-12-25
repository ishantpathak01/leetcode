class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>freq;
        for(auto c:sentence){
            freq[c]++;
        }
        vector<char>ans;
        for(auto it:freq){
            ans.push_back(it.first);
        }
        if(ans.size()==26){
            return true;
        }
        return false;
    }
};