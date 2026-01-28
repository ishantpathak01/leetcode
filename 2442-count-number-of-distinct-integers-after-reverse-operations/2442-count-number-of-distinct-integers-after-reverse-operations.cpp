class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> value = nums;
        map<int,int> freq;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i]; 
            int rev = 0;
            while (x > 0) {
                int last = x % 10;
                rev = last + rev * 10;
                x /= 10;
            }
            value.push_back(rev);
        }
        for (int i = 0; i < value.size(); i++) {
            freq[value[i]]++;
        }
        for (auto it : freq) {
            count++;
        }
        return count;
    }
};
