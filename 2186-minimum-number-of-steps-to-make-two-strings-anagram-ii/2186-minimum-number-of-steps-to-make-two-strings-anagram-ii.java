class Solution {
    public int minSteps(String s, String t) {
        HashMap<Character, Integer> mp = new HashMap<>();
        for(char c : s.toCharArray()) {
            mp.put(c, mp.getOrDefault(c, 0) + 1);
        }
        for(char c : t.toCharArray()) {
            mp.put(c, mp.getOrDefault(c, 0) - 1);
        }
        int count = 0;
        for(int value : mp.values()) {
            count += Math.abs(value);
        }
        return count;
    }
}