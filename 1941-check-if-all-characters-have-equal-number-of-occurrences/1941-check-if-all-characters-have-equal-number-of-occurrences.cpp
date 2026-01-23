class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> freq;
        vector<int> ans;
        for(char ch : s){
            freq[ch]++;   
        }

        for(auto it : freq){
            ans.push_back(it.second);
        }
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != ans[0]){ 
                return false;
            }
        }
        return true;
    }
};
