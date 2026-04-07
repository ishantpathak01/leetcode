class Solution {
    public String generateTheString(final int n) {
        final StringBuilder new1 = new StringBuilder();
        if(n % 2 == 0) {
            for(int i=0;i<n- 1; ++i){
                   new1.append('a');
            }
            new1.append('b');
            
        } else {
            for(int i = 0; i < n; ++i)
                new1.append('a');
        }
        return new1.toString();
    }
}