class Solution {
public:
    int totalMoney(int n) {
    int week= 1;
    int day = 1; 
    int money =0;
        for (int i =1; i <=n;i++){
            money +=day;
            day++;
    if (i% 7==0){
                week++;
                day= week;
            }
        }
        return money;
    }
};