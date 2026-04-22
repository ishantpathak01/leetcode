class Solution {
    public int lengthOfLongestSubstring(String s) {
        int start=0;
        int end=0;
        int ans=0;
        int freq[]=new int[128];
        while(end<s.length()){
            freq[s.charAt(end)]++;
            while(start<=end && freq[s.charAt(end)]>=2){
                freq[s.charAt(start)]--;
                start++;
            }
            ans=Math.max(ans,end-start+1);
            end++;
        }
        return ans;
    }
}