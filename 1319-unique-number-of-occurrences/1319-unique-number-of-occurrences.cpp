class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int ,int> freq;
        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }
        set<int> s;
        for(auto it : freq) {
            if(s.find(it.second) != s.end()) {
                return false; 
            }
            s.insert(it.second);
        }
        return true;
    }
};
