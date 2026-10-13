class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long result=0;
        int n=nums.size();
        sort(nums.begin(),nums.end(),[](int a, int b) {
            return 1LL*a*a < 1LL*b*b; 
            });
        for(int i=0;i<nums.size();i++)
            if(n/2>i){
                result=result-(1LL*nums[i]*nums[i]);
            }
            else{
                result=result+(1LL*nums[i]*nums[i]);
            }

        return result;
    }
};