class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        map<int, int> freq1, freq2;
        for (int i = 0; i < nums1.size(); i++) {
            freq1[nums1[i]]++;
        }
        for (int j = 0; j < nums2.size(); j++) {
            freq2[nums2[j]]++;
        }
        for (auto it : freq1) {
            if (freq2.count(it.first)) {
                return it.first;
            }
        }
        int a = freq1.begin()->first;
        int b = freq2.begin()->first;

        return min(a, b) * 10 + max(a, b);
    }
};