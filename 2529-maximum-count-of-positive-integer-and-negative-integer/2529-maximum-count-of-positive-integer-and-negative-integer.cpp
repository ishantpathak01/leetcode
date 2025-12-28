class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int poscount=0;
        int negcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                negcount++;
            }
            else if(nums[i]>0){
                poscount++;
            }
        }
        return max(negcount,poscount);
    }
};