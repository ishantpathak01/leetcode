class Solution {
public:
    int findlcm(int a, int b) {
        return a / gcd(a, b) * b;
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> result;
        int i = 0;
        while (i < nums.size()) {
            int curr = nums[i];
            while (!result.empty()) {
                int gcdd = gcd(result.back(), curr);
                if (gcdd == 1) {
                    break;
                }
                curr = findlcm(result.back(), curr);
                result.pop_back();
            }
            result.push_back(curr);
            i++;
        }
        return result;
    }
};