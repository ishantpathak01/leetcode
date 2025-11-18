class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int i=0;
        int j=0;
        while(j<nums.size()){
            if(nums[i] >= nums[j]) 
            j++;
            else if(nums[i] < nums[j]){
                count++;
                i++;
                j++;
            }
        } 
        return count;
    }
};
