class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        vector<int> num1 = nums;
        sort(num1.begin(), num1.end());
        int minn = num1[0];
        int maxx = num1[num1.size() - 1];
        int minIndex = 0;
        int maxIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == minn) {
                minIndex = i;
                break;
            }
        }
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == maxx) {
                maxIndex = j;
                break;
            }
        }
        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);
        int count1 = right + 1;
        int count2 = nums.size() - left;
        int count3 = left + 1 + nums.size() - right;
        return min({count1, count2, count3});
    }
};