
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> sett;
        int left = 0, right = 0;
        int maxlength=0 ;

        while (right < s.size()) {
            if (sett.find(s[right]) == sett.end()) {
                sett.insert(s[right]);
                maxlength = max(maxlength, right - left + 1);
                right++;
            } else {
                sett.erase(s[left]);
                left++;
            }
        }

        return maxlength;
    }
};