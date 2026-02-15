class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        map<int, int> freq2;
        for (auto it : freq) {
            freq2[it.second]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (freq2[freq[nums[i]]] == 1) {
                return nums[i];
            }
        }
        return -1;
    }
};
