class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int maxDrink = numBottles;
        int emptyBottles = numBottles;
        while (emptyBottles >= numExchange) {
            emptyBottles -= numExchange;   
            numExchange++;                 
            maxDrink++;                    
            emptyBottles++;             
        }
        return maxDrink;
    }
};