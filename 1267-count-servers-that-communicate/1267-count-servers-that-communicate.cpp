class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int a=grid.size();
        int b=grid[0].size();
        vector<int> r(a,0);
        vector<int> c(b,0);
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int result=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(grid[i][j]==1 && (r[i]>1 || c[j]>1)){
                    result++;
                }
            }
        }
        return result;
    }
};