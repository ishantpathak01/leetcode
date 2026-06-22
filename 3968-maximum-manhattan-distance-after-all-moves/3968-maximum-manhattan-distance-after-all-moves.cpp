class Solution {
public:
    int maxDistance(string moves) {
        int a=0;
        int b=0;
        int count=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                a--;
            }
            else if(moves[i]=='R'){
                a++;
            }
            else if(moves[i]=='U'){
                b++;
            }
            else if(moves[i]=='D'){
                b--;
            }
            else count++;
        }
        return abs(a)+abs(b)+count;
    }
};