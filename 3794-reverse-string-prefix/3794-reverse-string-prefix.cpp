class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        if (k <= 1 ) return s;
        for(int i = 0;i < k/2 ;i++){
            swap(s[i],s[k-1-i]);
        }
        return s;
    }
};