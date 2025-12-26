class Solution {
public:
    int bestClosingTime(string customers) {
        int score = 0;
        int maxScore = 0;
        int hour = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y') {
                score = score + 1;
            } else {
                score = score - 1;
            }
            if (score > maxScore) {
                maxScore = score;
                hour = i + 1;
            }
        }
        return hour;
    }
};
