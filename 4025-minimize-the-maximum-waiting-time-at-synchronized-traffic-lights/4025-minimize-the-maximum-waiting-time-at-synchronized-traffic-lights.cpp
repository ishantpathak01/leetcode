class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxx=*max_element(lights.begin(),lights.end());
       int result=0;
        for(int i = 0; i < arrivalTime.size(); i++) {
            int cur = arrivalTime[i] % period; 
            if(cur >= maxx){
                 result = max(result, period - cur);  
        }
        }
        return result; 
    }
};