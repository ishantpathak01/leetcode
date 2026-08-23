class Solution {
public:
    bool sumGame(string num) {
        int count1 = 0;
        int count2 = 0;
        int result = 0;
        for (int i = 0; i <num.length(); i++) {
            if (i < num.length() / 2) {
                if (num[i] == '?') {
                    count1++;
                }
                else {
                    result += num[i] - '0';
                }
            }
            else {
                if (num[i] == '?') {
                    count2++;
                }
                else {
                    result -= num[i] - '0';
                }
            }
        }
        if ((count1 + count2) % 2 != 0) {
            return true;
        }
        int ans = result+ (count1 / 2) * 9-(count2 / 2) * 9;
        return ans != 0;
    }
};