class Solution {
public:
    int numberOfSubstrings(string s) {
        int countA=-1;
        int countB=-1;
        int countC=-1;
        int total=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                countA=i;
            }
            else if(s[i]=='b'){
                countB=i;
            }
            else{
                countC=i;
            }
            if(countA !=-1 &&countB!=-1 &&countC!=-1){
            total+=min({countA,countB,countC})+1;
            }
        }
        return total;
    }
};