class Solution {
    public int strStr(String haystack, String needle) {
        int index = -1;
        for (int i = 0; i < haystack.length(); i++) {
            int j = 0, k = i;
            while (k < haystack.length() && j < needle.length() &&
                   haystack.charAt(k) == needle.charAt(j)) {
                k++;
                j++;
            }

            if (j == needle.length()) {
                index = i;
                break;
            }
        }

        return index;
    }
}