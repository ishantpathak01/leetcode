class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        sort(numsDivide.begin(),numsDivide.end());
        int val=numsDivide[0];
      for(int i=1;i<numsDivide.size();i++){
        val=gcd(val,numsDivide[i]);
      }
      for(int i=0;i<nums.size();i++){
        if(val%nums[i]==0){
            return i;
        }
      } 
      return -1;
    }
};