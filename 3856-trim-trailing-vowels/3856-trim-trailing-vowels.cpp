class Solution {
public:
    string trimTrailingVowels(string s) {
        int val=s.length();
        while(s[val-1] == 'a' ||s[val-1] == 'e'||s[val-1] == 'i' ||s[val-1] == 'o' ||s[val-1] == 'u'){
            s.pop_back();
            val--;
            if(val==0) break;
        }
        return s;
    }
};