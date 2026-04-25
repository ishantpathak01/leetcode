class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n;
        bool found = false;
        while(temp > 0){
            if(temp % 10 == x){
                found = true;
            }
            temp /= 10;
        }
        while(n >= 10){
            n /= 10;
        }
        return found && (n != x);
    }
};