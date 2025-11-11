class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target>1){
            if(maxDoubles==0){
                count=count+(target-1);
                break;
            }
            if(target%2==0){
                target=target/2;
                maxDoubles--;
            }
            else if( target%2!=0){
                target=target-1;
            }
            count++;
        }
        return count;
    }
};