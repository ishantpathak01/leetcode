class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int Score = 0;
        int Counter = 0;
        vector<int> ans;
        for (string a : events) {
            if (Counter == 10){
             break;
            }
            if (a == "1"){
                Score += 1;
                } 
            if (a == "2"){
                Score += 2;
            }
            if (a == "3") {
                Score += 3;
            }
            if (a == "4"){
             Score += 4;
            }
            if (a == "6"){
                Score += 6;
            }
            if (a == "W"){
                Counter++;
            }
            if (a == "WD"){
                Score++;
            }
            if (a == "NB"){
                Score++;
            }
        }
        ans.push_back(Score);
        ans.push_back(Counter);
        return ans;
    }
};