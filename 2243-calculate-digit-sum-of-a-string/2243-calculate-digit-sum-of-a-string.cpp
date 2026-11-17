class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k) {
            string ans;
            int i = 0;
            while(i < s.size()) {
                int sum = 0;
                int count = 0;
                while(count < k && i < s.size()) {
                    sum += s[i] - '0';
                    i++;
                    count++;
                }
               ans += to_string(sum);
            }
            s = ans;
        }

        return s;
    }
};