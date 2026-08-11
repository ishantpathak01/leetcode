class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> freq1;
        for(int i=0;i<=nums.size()-1;i++){
            freq1[nums[i]]++;
        }
            int sum=0;
                  for (int i = 0; i < nums.size(); i++){
            if(freq1[nums[i]]==1){
               sum=sum+nums[i];
            }
            }
        return sum;
    }
};