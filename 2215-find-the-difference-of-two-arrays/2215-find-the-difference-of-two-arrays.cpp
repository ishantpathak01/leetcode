class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>set1(nums1.begin(),nums1.end());
        set<int>set2(nums2.begin(),nums2.end());
        vector<int>ans1;
        vector<int>ans2;
        for(auto it:set1) {
            if(set2.find(it)==set2.end()){
            ans1.push_back(it);
            }
        }
        for(auto it:set2){
            if(set1.find(it)==set1.end()){
            ans2.push_back(it);
            }
        }
        return {ans1,ans2};
    }
};