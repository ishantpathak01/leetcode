class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> set;
        for(auto i:nums) set.insert(i);
        vector<int> result;
        for(int i=1; i<=nums.size(); i++){
            if(!set.count(i)) result.push_back(i);
        }
        return result;
    }
};