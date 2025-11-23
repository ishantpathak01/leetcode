class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long value=0;
        long long mul=1;
        while (n > 0) {
            int last = n % 10;
               sum=sum+last;
           if(last>0){
              value=(last*mul)+value;
              mul=mul*10;
           }
           n/=10;
        }
        return (sum*value);
    }
};