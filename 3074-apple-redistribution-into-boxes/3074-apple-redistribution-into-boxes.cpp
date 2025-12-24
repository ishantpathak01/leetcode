class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int c = 0;
        int sum = 0;
        for (int i = 0; i < apple.size(); i++) {
            sum += apple[i];
        }
        for (int i = capacity.size() - 1; i >= 0; i--) {
            if (sum <= 0) {
                break;
            }
            sum = sum - capacity[i];
            c++;
        }
        return c;
    }
};