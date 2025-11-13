class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int j = 0; 
        for (int i = 1; i <= n; i++) {
            ops.push_back("Push");
            if (i == target[j]) {
                j++;
                if (j == target.size()) break;
            } else {
                ops.push_back("Pop");
            }
        }
        return ops;
    }
};
