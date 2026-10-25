class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int left = 0;
        int count = 0;
        int ans = 0;
          map<int, int >freq;
        for (int right = 0; right < nums.size(); right++) {
            freq[nums[right]]++;
            while (freq.size() > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);
                left++;
                count = 0;
            }
            while (freq.size() == k && freq[nums[left]] >1) {
                freq[nums[left]]--;
                left++;
                count++;
            }
            if (freq.size() == k)
                ans += count + 1;
        }
        return ans;
    }
};
