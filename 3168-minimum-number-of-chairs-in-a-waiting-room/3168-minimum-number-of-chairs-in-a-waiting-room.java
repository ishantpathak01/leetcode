class Solution {
    public int minimumChairs(String s) {
        int countE = 0;   
        int countL = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            if (ch == 'E') {
                if (countL > 0) {
                    countL--;
                } else {
                    countE++;
                }
            } 
            else { 
                countL++; 
            }
        }

        return countE;
    }
}