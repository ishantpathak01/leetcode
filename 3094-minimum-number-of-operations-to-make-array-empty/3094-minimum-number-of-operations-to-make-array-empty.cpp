class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
       int count=0;
        for(auto it:freq){
            int value=it.second;
            if(it.second==1){
                return -1;
            }
             count+=value/3;
             if(value%3!=0){
                count++;
             }
        }
        return count;
    }
};