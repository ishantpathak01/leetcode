class Solution {
public:
    int minimumDeletions(string s) {
      int count=0;
      int del=0;
      for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'a') {
                count++;
            } 
             else if (s[i] == 'b' && count> 0) {
                del++;
                count--;
            }
        }
        return del;
    }
};