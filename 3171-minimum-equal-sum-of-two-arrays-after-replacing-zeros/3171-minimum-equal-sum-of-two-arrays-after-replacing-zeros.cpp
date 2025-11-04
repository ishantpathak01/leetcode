class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        int zero1 = 0, zero2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] == 0) {
                zero1++;
            } else {
                sum1 += nums1[i];
            }
        }
        for (int j = 0; j < nums2.size(); j++) {
            if (nums2[j] == 0) {
                zero2++;
            } else {
                sum2 += nums2[j];
            }
        }
        if (zero1 == 0 && sum1 < sum2 + zero2)
            return -1;
        if (zero2 == 0 && sum2 < sum1 + zero1)
            return -1;
        return max(sum1 + zero1, sum2 + zero2);
    }
};