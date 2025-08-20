class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int maxx = INT_MIN;
        
        for (int i = 1; i < nums.size(); i++) {
            int ans = abs(nums[i - 1] - nums[i]);
            maxx=max(ans,maxx);
        }
        return maxx;
    }
};