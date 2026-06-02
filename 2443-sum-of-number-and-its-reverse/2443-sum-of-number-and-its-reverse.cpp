class Solution {
public:
double reverse(int a){
    int reverse=0;
    while(a>0){
        reverse=reverse*10+(a%10);
        a=a/10;
    }
    return reverse;
}
    bool sumOfNumberAndReverse(int num) {
         for(int a = 0; a <= num; a++){
            if(a + reverse(a) == num)
                return true;
        }

        return false;
    }
};