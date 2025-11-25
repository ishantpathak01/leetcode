class Solution {
public:
    int minPartitions(string n) {
        int m=n.size();
        int max=0;
        for(int i=0;i<n.size();i++){
            int digit=n[i]-'0';
            if(digit>max){
                max=digit;
            }
        }
        return max;
    }
};