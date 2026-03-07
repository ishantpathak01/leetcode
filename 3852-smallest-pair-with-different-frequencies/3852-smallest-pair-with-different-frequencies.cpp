class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int>freq;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>ans(2);
        for(int i=1;i<nums.size();i++){
            if(freq[nums[0]] != freq[nums[i]]){
                ans[0] = nums[0];
                ans[1] = nums[i];
                return ans;
            }
        }
        return {-1,-1};
    }
};