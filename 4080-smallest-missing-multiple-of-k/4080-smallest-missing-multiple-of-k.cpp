class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s(nums.begin(), nums.end());
        int i = 1;
        while (true) {
            if (i % k == 0 && s.find(i) == s.end()) 
            return i;
            i++;
        }
    }
};
