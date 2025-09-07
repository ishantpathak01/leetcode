class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
            int maxelement=*max_element(arr.begin(),arr.end());
            for(int i=0;i<arr.size(); i++){
                if(maxelement==arr[i]){
                    return i;
                }
            }
            return 0;
    }
};