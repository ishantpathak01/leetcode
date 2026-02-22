class Solution {
    public int maxDepth(String s) {
        int val = 0;
        int maxx = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                val++;
                maxx = Math.max(maxx, val);
            } 
            else if (s.charAt(i) == ')') {
                val--;
            }
        }
        return maxx;
    }
}