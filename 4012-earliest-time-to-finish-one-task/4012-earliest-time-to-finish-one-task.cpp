class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int minn=INT_MAX;
        for(int i=0;i<tasks.size();i++){
               int sum=tasks[i][0]+tasks[i][1];
                 minn=min(sum,minn);
        }
        return minn;
    }
};