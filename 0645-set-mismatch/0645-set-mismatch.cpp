class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        int duplicate = 0, missing = 0;
        for (int i = 1; i <= nums.size(); i++) {
            if (freq[i] == 2) {
                duplicate = i;
            }
            if (freq[i] == 0) {
                missing = i;
            }
        }
        result.push_back(duplicate);
        result.push_back(missing);
        return result;
    }
};
