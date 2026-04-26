class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long Ascending_sum=0;
        long long Descending_sum=0;
        int peak=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[peak]){
                peak=i;
            }
        }
        for(int i=0;i<=peak;i++){
            Ascending_sum+=nums[i];
        }
        for(int j=peak;j<nums.size();j++){
            Descending_sum+=nums[j];
        }
        if(Ascending_sum>Descending_sum){
            return 0;
        }
        else if(Descending_sum>Ascending_sum){
            return 1;
        }
        return -1;
    }
};