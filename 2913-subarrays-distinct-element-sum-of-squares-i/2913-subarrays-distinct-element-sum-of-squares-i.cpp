class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            map<int, int> freq;
            for (int j = i; j < nums.size(); j++) {
                freq[nums[j]]++;
                sum+=freq.size()*freq.size();
            }
        }
        return sum;
    }
};