class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> result;
        for (int i = 0; i < heights.size() - 1; i++) {
            int gap = heights[i + 1] - heights[i];
            if (gap <= 0) {
                continue;
            }
            result.push(gap);
            if (result.size() > ladders) {
                bricks = bricks - result.top();
                result.pop();
                if (bricks < 0) {
                    return i;
                }
            }
        }
        return heights.size() - 1;
    }
};