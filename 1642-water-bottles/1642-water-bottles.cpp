class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum =numBottles;
        while(numBottles>=numExchange){
            int Newbottle=numBottles/numExchange;
            int reminder=numBottles%numExchange;
            sum+=Newbottle;
            numBottles=Newbottle+reminder;
        }
        return sum;
    }
};
