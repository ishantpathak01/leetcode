class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size()%k!=0){
            return false;
        }
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            int group=nums.size()/k;
            if(freq[nums[i]]>group){
                return false;
            }
        }
        return true;
    }
};