class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>freq;
         int maxi=INT_MIN;
         int sum=0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            maxi=max(maxi,freq[nums[i]]);
        }
          for(auto it:freq){
            if(it.second == maxi){
           sum += it.second;
          }
          }
          return sum;
    }
};