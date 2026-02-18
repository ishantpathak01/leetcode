class Solution {
public:
    bool hasAlternatingBits(int n) {  
        int num = n;
        int prev = num%2;
        num /= 2;
        while(num >= 1){
            if(num % 2 == prev) return false;
            else{
                prev = num % 2;
                num /= 2;
            }
        }
        return true;
    }
};