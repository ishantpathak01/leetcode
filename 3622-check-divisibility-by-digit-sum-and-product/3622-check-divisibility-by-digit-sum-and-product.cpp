class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int temp=n;
        while(temp>0){
            int last=temp%10;
            sum+=last;
            pro*=last;
            temp=temp/10;
        }
        if(n%(sum+pro)==0){
            return true;
        }
        return false;
    }
};