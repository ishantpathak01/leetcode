class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=INT_MAX;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<min){
                min=abs(nums[i]);
                res=nums[i];
            }
            if(abs(nums[i]) == min){
            
              res=max(nums[i],res);
            }
            }
            return res;
            
        }
};