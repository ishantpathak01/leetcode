class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int y =(4* cheeseSlices - tomatoSlices) / 2;
        int x =cheeseSlices - y;
        if (((4 *x+2*y) != tomatoSlices)||(x + y != cheeseSlices) ||
            (x < 0|| y < 0)){
            return {};
            }
        return {x, y};
    }
};