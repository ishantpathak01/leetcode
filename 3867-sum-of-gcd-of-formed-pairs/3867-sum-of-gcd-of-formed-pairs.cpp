class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxm=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            maxm=max(maxm,nums[i]);
            nums[i]=gcd(maxm,nums[i]);
        }
        sort(nums.begin(),nums.end());
        int i=0;
        long long int sum=0;
        while(i<(n-1-i)){
            sum+=gcd(nums[i],nums[n-1-i]);
            i++;
        }
        return sum;
    }
};