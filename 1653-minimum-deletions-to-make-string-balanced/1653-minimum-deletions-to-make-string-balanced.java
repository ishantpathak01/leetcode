class Solution {
    public int minimumDeletions(String s) {
        int count = 0;
        int del = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            char ch = s.charAt(i);
            if (ch == 'a') {
                count++;
            } else {
                if (count > 0) {
                    del++;
                    count--;
                }
            }
        }
        return del;
    }
}
