class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,int>freq;
        for(int i=0;i<rectangles.size();i++){
            double ratio=rectangles[i][0] / double(rectangles[i][1]);
            freq[ratio]++;
        }
        long long count=0;
        for(auto it:freq){
            long long a=it.second;
          a= (a *(a-1))/2.0;
            count+=a;
        }
        return count;
    }
};