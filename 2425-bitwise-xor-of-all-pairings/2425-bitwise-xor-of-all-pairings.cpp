class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int XOR1=0;
        int XOR2=0;
        if(nums1.size()%2!=0){
            for(int i=0;i<nums2.size();i++){
                XOR1=XOR1^nums2[i];
            }
        }
        if(nums2.size()%2!=0){
            for(int i=0;i<nums1.size();i++){
                XOR2=XOR2^nums1[i];
            }
        }
        return XOR1^XOR2;
    }
};