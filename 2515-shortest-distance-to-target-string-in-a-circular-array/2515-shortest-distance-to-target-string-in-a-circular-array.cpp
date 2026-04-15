class Solution {
public:
    int closestTarget(vector<string>& words, string target, int start) {
        int n = words.size();
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            if(words[i] ==target){
                int distance= abs(i - start);
                ans = min(ans, min(distance, n - distance));
            }
        }
       if (ans == INT_MAX) {
        return -1;
            } else {
             return ans;
                }
    }
}
;