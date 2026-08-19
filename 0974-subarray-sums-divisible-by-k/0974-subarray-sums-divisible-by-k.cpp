class Solution { 
public: 
    int subarraysDivByK(vector<int>& nums, int k) { 
        map<long long, long long> freq; 
        long long ans = 0; 
        long long sum = 0; 
        freq[0] = 1;
        for(int i = 0; i < nums.size(); i++) {  
            sum += nums[i] % k; 
            sum += k; 
            sum %= k; 
            ans += freq[sum]; 
            freq[sum]++; 
        }  
        return ans; 
    } 
};