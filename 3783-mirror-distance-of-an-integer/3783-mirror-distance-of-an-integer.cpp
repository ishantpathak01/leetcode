class Solution {
public:
    int mirrorDistance(int n) {
        int reverse=0;
        int newn=n;
        while(n>0){
            int last=n%10;
            reverse=reverse*10+last;
            n/=10;
        }
        return abs(newn-reverse);
    }
};