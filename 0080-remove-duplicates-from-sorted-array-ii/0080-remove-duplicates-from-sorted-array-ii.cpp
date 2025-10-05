class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n; // Already valid if ≤ 2 elements

        int count = 1; // Count occurrences of current number
        int index = 1; // Position to insert next allowed number

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count for new number
            }

            if (count <= 2) {
                nums[index] = nums[i];
                index++;
            }
        }

        return index; // New length
    }
};
