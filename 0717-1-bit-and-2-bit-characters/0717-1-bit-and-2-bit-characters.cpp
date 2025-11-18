class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        int j=bits.size()-1;
        while(i<j){
            if(bits[i]==1){
                i=i+2;
            }
            else{
                i=i+1;
            }
        }
        return (i==j);
    }
};