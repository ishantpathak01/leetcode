class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int rest = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            map<int, int> freq;
            for (int j = i; j < nums.size(); j++) {
                sum = sum + nums[j];
                freq[nums[j]]++;
                if (freq[sum] > 0) {
                    rest++;
                }
            }
        }
        return rest;
    }
};