class Solution {
public:
  bool isAnagram(string a, string b) {
    if (a.length() != b.length())
        return false;
    vector<int> freq(26, 0);
    for (int i = 0; i < a.length(); i++) {
        freq[a[i] - 'a']++;
    }
    for (int i = 0; i < b.length(); i++) {
        freq[b[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int k = p.length();
        for (int i = 0; i + k <= s.length(); i++) {
            string temp = s.substr(i, k);
            if (isAnagram(temp, p))
                ans.push_back(i);
        }
        return ans;
    }
};