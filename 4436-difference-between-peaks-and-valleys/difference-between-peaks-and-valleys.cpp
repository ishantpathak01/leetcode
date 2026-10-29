class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1]&& nums[i]>nums[i+1]){
                a=a+nums[i];
            }
            else if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
                b=b+nums[i];
            }
        }
        int diff=a-b;
        return diff;
    }
};