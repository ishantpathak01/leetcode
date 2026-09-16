class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        int minc=INT_MAX;
        int maxc=INT_MIN;
        int minr=INT_MAX;
        int maxr=INT_MIN;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j]==1){
                minr=min(minr,i);
                maxr=max(maxr,i);
                 minc=min(minc,j);
                maxc=max(maxc,j);
                }
            }
        }
         int height = maxr - minr + 1;
        int width = maxc - minc + 1;
        return height*width;
    }
};