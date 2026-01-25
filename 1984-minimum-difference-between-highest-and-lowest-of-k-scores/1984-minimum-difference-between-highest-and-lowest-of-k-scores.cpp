class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxx=INT_MAX;
        int i=k-1;
        int j=0;
        while(i<n){
            int diff=nums[i]-nums[j];
            maxx=min(maxx,diff);
            i++;
            j++;
        }
        return maxx;
    }
};