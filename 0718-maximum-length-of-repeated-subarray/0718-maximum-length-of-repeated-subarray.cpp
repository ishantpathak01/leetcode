class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int len = 0;
            for (int j = 0; j < m && i + j < n; j++) {
                if (nums1[i + j] == nums2[j]) {
                    len++;
                    ans = max(ans, len);
                } else {
                    len = 0;
                }
            }
        }
        for (int j = 1; j < m; j++) {
            int len = 0;
            for (int i = 0; i < n && j + i < m; i++) {
                if (nums1[i] == nums2[j + i]) {
                    len++;
                    ans = max(ans, len);
                } else {
                    len = 0;
                }
            }
        }
        return ans;
    }
};
