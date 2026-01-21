class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
     double maxx =DBL_MAX;
     int i=0;
     int j=nums.size()-1;
     while(i<j){
        double avg=(nums[i]+nums[j])/2.0;
         maxx=min(maxx,avg);
         i++;
         j--;
     }
     return maxx;
    }
};