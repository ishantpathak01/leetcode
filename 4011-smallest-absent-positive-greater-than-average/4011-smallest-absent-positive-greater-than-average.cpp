class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];
        }

        int average = 1;
        if(sum>0){
            average = sum / nums.size();
            average++;
        }
        set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        while (true) {
            if (s.find(average) == s.end()) {
                return average;
            }
            average++;
        }
    }
};