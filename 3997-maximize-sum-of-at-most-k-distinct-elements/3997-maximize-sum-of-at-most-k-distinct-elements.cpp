class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> result;
        sort(nums.begin(), nums.end(), greater<int>()); 
        int count = 0;
        if(k>0){
            k--;
            result.push_back(nums[0]);
        }
        for(int i = 1; i < nums.size() && count < k; i++) {
            if(nums[i] != nums[i-1]) {   
                result.push_back(nums[i]);
                count++;
            }
        }

        return result;
    }
};
