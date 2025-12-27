class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int j=nums.size();
        for(int i=0;i<nums.size();i++){
            if(j%(i+1)==0){
                sum+=nums[i]*nums[i];
            }
        }
        return sum;
    }
};