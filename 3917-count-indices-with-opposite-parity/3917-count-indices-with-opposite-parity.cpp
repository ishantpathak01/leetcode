class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            int count =0;
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]%2)==(nums[j]%2==0)){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};