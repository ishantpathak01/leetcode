class Solution {
public:
    int toSeconds(string &time) {
        int hours   = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        int seconds = stoi(time.substr(6, 2));
        return hours * 3600 + minutes * 60 + seconds;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int start = toSeconds(startTime);
        int end   = toSeconds(endTime);
        return end - start;
    }
};