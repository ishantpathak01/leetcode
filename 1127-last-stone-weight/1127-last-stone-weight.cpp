#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.empty()) return 0;
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end());
            int x = stones.back();    // largest
            stones.pop_back();
            int y = stones.back();    // second largest
            stones.pop_back();
            if (x != y) stones.push_back(x - y);
        }
        return stones.empty() ? 0 : stones[0];
    }
};
