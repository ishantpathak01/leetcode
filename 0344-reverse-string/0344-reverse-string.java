class Solution {
    public void reverseString(char[] s) {
        int n=s.length;
        int i=0,j=n-1;
        while(i<j){
            char str=s[i];
            s[i]=s[j];
            s[j]=str;
            i++;
            j--;
        }
    }
}