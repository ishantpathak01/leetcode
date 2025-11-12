class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        vector<int>x1;
        vector<int>x2;
        for(int i=0;i<nums.size()/2;i++){
            x1.push_back(nums[i]);
        }
        for(int j=nums.size()/2;j<=nums.size()-1;j++){
            x2.push_back(nums[j]);
        }
        for(int i=0;i<x1.size()&&x2.size();i++){
            ans.push_back(x1[i]);
            ans.push_back(x2[i]);
        }
        return ans;
    }
};