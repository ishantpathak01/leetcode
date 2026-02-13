class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = 0;
            int digit2 = 0;
            if (i >= 0) {
                digit1 = num1[i] - '0';
                i--;
            }
            if (j >= 0) {
                digit2 = num2[j] - '0';
                j--;
            }
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            int digit = sum % 10;
            result += (digit + '0'); 
        }
        reverse(result.begin(), result.end());  
        return result;
    }
};
