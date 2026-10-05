class Solution {
    public boolean checkValidString(String s) {
        int a=0;
        int b=0;
        for(int i=0;i<s.length();i++) {
            if(s.charAt(i)=='(') {
                a++;
                b++;
            } else if(s.charAt(i)==')') {
                a--;
                b--;
            } else {
                b++;
                a--;
            }
            if(b < 0) {
                return false;
            }
            if(a < 0) {
                a = 0;
            }
        }
        return a==0;
    }
}