class Solution {
    public int closestTarget(String[] words, String target, int startIndex) {
        int n = words.length;
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            if (words[i].equals(target)) {
                int distance = Math.abs(i - startIndex);
                ans = Math.min(ans, Math.min(distance, n - distance));
            }
        }
        if (ans == Integer.MAX_VALUE) {
            return -1;
        } else {
            return ans;
        }
    }
}