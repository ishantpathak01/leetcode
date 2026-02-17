class Solution {
public:
    int distinctAverages(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int i=0;
         int j=nums.size()-1;
         set<float>value;
         while(i<j)
         {
             value.insert((nums[i]+nums[j])/2.0);
             i++;
             j--;
         }
         return value.size();
    }
};