class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int val = nums[i];
            int minn = nums[i];
            for (int j = i; j < n; j++) {
                val &= nums[j];
                minn = min(minn, nums[j]);

                if (val == minn) {
                    count++;
                }
            }
        }
        return count;
    }
};