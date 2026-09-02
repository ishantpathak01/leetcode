class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int i;
        int j;
        int odd = 0;
        int even = 0;
        for (i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 == 0) {
                odd++;
            } else {
                even++;
            }
        }
        if (odd == 0 || even == 0) {
            return true;
        } else if (odd == 1 || even == 1) {
            return true;
        }
        return true;
    }
};