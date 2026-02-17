class Solution {
    public int distinctAverages(int[] nums) {
        Arrays.sort(nums);
         int i=0;
         int j=nums.length-1;
         HashSet<Double>value =new HashSet<>();
         while(i<j)
         {
             value.add((nums[i]+nums[j])/2.0);
             i++;
             j--;
         }
         return value.size();
    }
}