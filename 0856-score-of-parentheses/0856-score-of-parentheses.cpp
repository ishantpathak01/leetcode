class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> result;
        int count = 0;
        for(char ch : s) {
            if(ch == '(') {
                result.push(count);
                count = 0;
            }
            else {
                count = result.top() + max(count * 2, 1);
                result.pop();
            }
        }
        return count;
    }
};