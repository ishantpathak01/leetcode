class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> value = nums;
        set<int>st;
        for (int i= 0; i < nums.size(); i++) {
            int rev = 0;
            while (nums[i] > 0) {
                int last = nums[i] % 10;
                rev = last + rev * 10;
                nums[i] /= 10;
            }
            value.push_back(rev);
        }
        for(int i=0;i<value.size();i++){
            st.insert(value[i]);
        }
        return st.size();
    }
};
