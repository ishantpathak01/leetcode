class Solution {
public:
    int countElements(vector<int>& nums) {
        int minE = *min_element(nums.begin(), nums.end());
        int maxE = *max_element(nums.begin(), nums.end());
        int count = 0;
        for (int num : nums){
            if (num > minE && num < maxE){
                count++;
            }
        }
        return count;
    }
}; 