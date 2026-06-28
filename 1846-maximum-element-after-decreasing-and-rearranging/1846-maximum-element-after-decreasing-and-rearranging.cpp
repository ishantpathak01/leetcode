class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int maxValue = 0;
        for(int i = 0 ; i < n ; i++){
            if(maxValue+1 <= arr[i]){
                maxValue++;
            }
        }

        return maxValue;
    }
};