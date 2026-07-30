class Solution {
public:
    int minimumPushes(string word) {
        map<char, int> mp;
        int push = 1;
        int count = 0;
        for (char ch : word) {
            mp[ch] = push;
            count++;
            if (count == 8) {
                push++;
                count = 0;
            }
        }
        int ans = 0;
      for (char ch : word) {
            ans += mp[ch];
        }
        return ans;
    }
};