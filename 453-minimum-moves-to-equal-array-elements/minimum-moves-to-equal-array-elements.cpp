class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxx=nums[0];
        int result=0;
        for(int i=nums.size()-1;i>=0;i--){
            result+=(nums[i]-nums[0]);
        }
        return result;
    }
};