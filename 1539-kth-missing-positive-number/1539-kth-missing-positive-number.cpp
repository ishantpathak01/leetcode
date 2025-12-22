class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> result;
        int curr = 1;
        int i = 0;
        while (result.size() < k) {
            if (i < arr.size() && arr[i] == curr) {
                i++;  
            } else {
                result.push_back(curr);
            }
            curr++;
        }
        return result[k - 1];
    }
};
