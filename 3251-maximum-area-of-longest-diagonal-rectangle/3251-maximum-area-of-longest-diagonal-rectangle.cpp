class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdiagonal = 0;
        int maxarea = 0;

        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            int area = l * w;
            int currdiagonal = l * l + w * w;

            if (currdiagonal > maxdiagonal) {
                maxdiagonal = currdiagonal;
                maxarea = area;
            } 
            else if (currdiagonal == maxdiagonal && area > maxarea) {
                maxarea = area;
            }
        }
        return maxarea;
    }
};
