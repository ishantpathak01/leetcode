class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>mp;
        int j=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
          while(mp[nums[i]]>k){
            mp[nums[j]]--;
            j++;
          }
          int len= i-j+1;
          maxx=max(maxx,len);
        }
        return maxx;
    }
};