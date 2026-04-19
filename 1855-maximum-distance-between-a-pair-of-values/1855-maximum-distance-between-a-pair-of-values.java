class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int dist = 0;
        int maxDist = 0;
        int i = 0;
        int j = 0;
        while(i < nums1.length && j < nums2.length){
            if(nums1[i] <= nums2[j]){
                dist = j - i;
                maxDist = Math.max(maxDist, dist);
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return maxDist;   
    }
}