class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>st1;
        for(int i=0;i<nums.size();i++){
            long long curr = 1LL*nums[i];
            while(!st1.empty() && st1.back() == curr){
                st1.pop_back();
                curr*=2LL;
            }
            st1.push_back(curr);
        }
        return st1;

    }
};