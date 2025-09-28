class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>freq;
        for(int i=0;i<tasks.size();i++){
            freq[tasks[i]]++;
        }
        int count=0;
        for(auto it:freq){
            int value=it.second;
        if(it.second==1){
            return -1;
        }
            count+=value/3;
            if(value%3!=0){
                count++;
            }
        }
         return count;
    }
};