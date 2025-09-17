class Solution {
public:
        vector<int> nextGreaterElements(vector<int>& nums) {
      int n = nums.size();
      vector<int> result(n, -1);
      for (int i = 0; i < n; i++) {
          for (int j = 1; j < n; j++) {
              int next = (i + j) % n;  
              if (nums[next] > nums[i]) {
                  result[i] = nums[next];
                 break;
             }
         }
    }
     return result;
 }
    };