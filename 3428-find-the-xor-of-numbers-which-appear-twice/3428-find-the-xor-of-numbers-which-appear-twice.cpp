class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>result;
        map<int ,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second==2){
                result.push_back(it.first);
            }
        }
        int XOR=0;
        for(int i=0;i<result.size();i++){
            XOR=XOR^result[i];
        }
        return XOR;
    }
};