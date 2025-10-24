class Solution {
public:
long reversenumber(int num){
    long reverse=0;
    while (num>0){
        int last=num%10;
        reverse= (reverse*10)+last;
        num/=10;
        
    }
    return reverse;
}
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long reverse = reversenumber(x);
        if(reverse==x){
            return true;
        }
        else{
            return false;
        }
    }

};