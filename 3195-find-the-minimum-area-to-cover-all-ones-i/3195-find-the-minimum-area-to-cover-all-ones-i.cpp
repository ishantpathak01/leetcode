class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        vector<int>height;
        vector<int>width;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j]==1){
                height.push_back(i);
                width.push_back(j);
                }
            }
        }
         sort(height.begin(),height.end());
         sort(width.begin(),width.end());
         int h =height.back() -height[0] + 1;
        int w =width.back() -width[0] + 1;

        return h* w;
    }
};