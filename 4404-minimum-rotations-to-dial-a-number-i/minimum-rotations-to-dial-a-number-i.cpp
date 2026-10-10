class Solution {
public:
    int minRotations(string s) {
        char val = s[0];
        int result = 0;
        int a=val-'0';
        result += min(abs(a-0), 10-abs(a-0));
        for(int i = 1; i<s.length(); i++){
            int a = s[i-1]-'0';
            int b = s[i]-'0';
            result+=min(abs(a-b), 10-abs(a-b));
        }
        return result;
    }
};