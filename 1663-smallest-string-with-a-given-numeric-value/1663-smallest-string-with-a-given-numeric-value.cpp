class Solution {
public:
    string getSmallestString(int n, int k) {
        string result(n, 'a');
        k = k - n; 
        for (int i = n - 1; i >= 0; i--) {
            int add = min(k, 25);
            result[i] = result[i] + add;
            k = k - add;
            if (k == 0)
                break;
        }
        return result;
    }
};