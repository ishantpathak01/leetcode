class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0; i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second==nums.size()/2){
                return it.first;
            }
        }
        return -1;
    }
};