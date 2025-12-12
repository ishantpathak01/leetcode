class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        int minn = *min_element(nums.begin(), nums.end());
        vector<int> result;
        set<int> st(nums.begin(), nums.end());
        for (int i =minn; i <= maxx; i++) {
            if (st.find(i) == st.end()) {
                result.push_back(i);
            }
        }
        return result;
    }
};
