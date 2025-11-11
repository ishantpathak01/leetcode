class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>freq;
        while(n>0){
            int last=n%10;
            freq[last]++;
            n=n/10;
        }
        int minn=INT_MAX;
        int result=-1;
        for(auto it:freq){
            if(it.second<minn){
                minn=it.second;
                result=it.first;
            }
        }
        return result;
    }
};