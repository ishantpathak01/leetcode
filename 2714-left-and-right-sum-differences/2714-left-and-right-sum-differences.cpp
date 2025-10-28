class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> result;
        vector<int> leftsum;
        vector<int> rightsum;
        
        int sum1 = 0;
        for(int i = 0; i < nums.size(); i++){
            leftsum.push_back(sum1);
            sum1 += nums[i];
        }

        int sum2 = 0;
        for(int j = nums.size() - 1; j >= 0; j--){
            rightsum.push_back(sum2);
            sum2 += nums[j];
        }
        reverse(rightsum.begin(), rightsum.end());

        for(int k = 0; k < nums.size(); k++){
            result.push_back(abs(leftsum[k] - rightsum[k]));
        }
        
        return result;
    }
};
