class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
    map<int,int>freq;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    for(auto it:freq){
        if(it.second%k==0){
            sum+=it.first*it.second;
        }
    }
    return sum;
    }
};