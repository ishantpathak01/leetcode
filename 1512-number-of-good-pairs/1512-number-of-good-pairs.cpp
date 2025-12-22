class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            count+=freq[nums[i]]++;
        }
        return count;
    }
};