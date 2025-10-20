class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        vector<int>result;
        int OR=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                result.push_back(nums[i]);
            }
        }
        for(int i=0;i<result.size();i++){
           OR=OR|result[i];
        }
        return OR;
    }
};