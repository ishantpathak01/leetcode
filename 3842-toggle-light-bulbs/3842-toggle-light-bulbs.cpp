class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
      map<int,int>freq;
      vector<int>result;
      for(int i=0;i<bulbs.size();i++){
        freq[bulbs[i]]++;
      }
      for(auto it:freq){
        if(it.second%2!=0){
            result.push_back(it.first);

        }
      }
      return result;
    }
};