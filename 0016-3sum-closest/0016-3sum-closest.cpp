class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int resultsum=nums[0]+nums[1]+nums[2];
        int minvalue=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return sum;
                }
                else if(sum<target){
                    j++;
                }
                else {
                    k--;
                }

                int difftotarget=abs(sum-target);
                if(difftotarget<minvalue){
                    minvalue=difftotarget;
                    resultsum=sum;
                }

            }
        }
        return resultsum;
    }
};