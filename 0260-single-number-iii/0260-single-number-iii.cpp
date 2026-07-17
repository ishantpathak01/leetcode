class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int ,int> freq1;
        vector<int >result;
        for(int i=0; i<=nums.size()-1;i++){
        freq1[nums[i]]++;
        }
        
    for (auto &value: freq1){
            if(value.second==1){
                result.push_back(value.first);
            }
        }
        return result;
    }
};