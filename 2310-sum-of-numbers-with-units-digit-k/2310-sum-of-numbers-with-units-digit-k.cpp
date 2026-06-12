class Solution {
public:
    int minimumNumbers(int num, int k) {
    if(num==0) {
        return 0;
    }
    if(num%10!=0 && k==0){
        return -1;
    }
    if(num==0 && k==0) {
        return 0;
    }
    if(num%2!=0 && k%2==0) {
        return -1;
    }
    int count=0;
    while(num>0){
        if(num%10==k){
           count++;
           return count;
        }
        num=num-k;
        count++;
     }
    return -1;
    }
};