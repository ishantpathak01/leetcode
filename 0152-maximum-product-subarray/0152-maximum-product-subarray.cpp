class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int maxx=nums[0];
     for(int i=0;i<nums.size();i++){
        int maxproduct=1;
        for(int j=i;j<nums.size();j++){
            maxproduct =maxproduct*nums[j];
            maxx=max(maxproduct,maxx);
        }
     }
     return maxx;
    }
};