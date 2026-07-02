class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    set<int> result;
    int count = 0;
        for(int i=nums.size()-1; i>=0; i--){
        count++;
        if(nums[i] >= 1 && nums[i] <= k){
            result.insert(nums[i]);
        }
        if(result.size() == k){

         break;
        }
    }
    return count;
}
};