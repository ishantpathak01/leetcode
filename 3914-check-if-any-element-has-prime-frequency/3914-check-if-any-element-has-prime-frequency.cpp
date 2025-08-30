class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        for(auto it:freq){
            int f = it.second;
            if(f < 2) continue; 
            bool prime = true;
            for(int i=2;i<=f/2;i++){
                if(f % i == 0){
                    prime = false;
                    break;
                }
            }
            if(prime){
                return true;
            }
        }
        return false;
    }
};
