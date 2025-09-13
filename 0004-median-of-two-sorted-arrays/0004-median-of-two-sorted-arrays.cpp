class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans =nums1;
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()%2==1){
            return ans[ans.size()/2];
        }
         else return (ans[ans.size()/2 - 1] + ans[ans.size()/2]) / 2.0;
    }
};