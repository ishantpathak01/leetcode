class Solution {
public:
    int maxScore(vector<int>& nums) {
        int result=0;
        long long sum=0;
       sort(nums.begin(),nums.end());
       for(int i=nums.size()-1;i>=0;i--){
        sum+=nums[i];
        if(sum>0){
            result++;
        }
       }
       return result;
    }
};