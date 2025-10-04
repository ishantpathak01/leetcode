class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
       int i=0;
       int j=height.size()-1;
    while (i < j) {
            int width = j -i;
            int heightt =min(height[i], height[j]);
            int area = width *heightt;
            maxarea = max(maxarea, area);
            
             if (height[i]<height[j]){
            i++;
            }
            else {
                j--;
            }
    }
        return maxarea;
    }
};