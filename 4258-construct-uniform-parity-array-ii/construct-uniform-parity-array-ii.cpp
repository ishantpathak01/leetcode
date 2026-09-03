class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        bool odd= false;
        int ind = -1;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2!=0){
                odd=true;
                ind=i;
                break;
            }
        }
        if(!odd){
            return true;
        }
        if(ind!=0){
            return false;
        }
        return true;
    }
};