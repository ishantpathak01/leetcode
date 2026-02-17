class Solution {
    public int balancedStringSplit(String s) {
        int LCount=0;
        int RCount=0;
        int Count=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='L') {
                LCount++;
            }
            else {
                RCount++;
            }
            if(LCount==RCount){ 
                Count++;
                LCount=0;
                RCount=0;
            }
        }
        return Count;
    }
}