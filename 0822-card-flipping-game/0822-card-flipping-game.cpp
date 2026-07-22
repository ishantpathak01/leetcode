class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        int n = fronts.size();
         set<int> commons;
        for(int i = 0; i< n; i++){
            if(fronts[i] == backs[i])
            commons.insert(fronts[i]);
        }
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            if(!commons.count(fronts[i])){

                ans = min(ans, fronts[i]);
            }
            if(!commons.count(backs[i])){
                ans = min(ans, backs[i]);
            }
        } 
        if(ans == INT_MAX)
    return 0;
else
    return ans;
    }
};