class Solution {
public:
    string smallestPalindrome(string s) {
        int a= s.size(); 
        int mid=a/2; 
        sort(s.begin(),s.begin()+mid);
         for (int i = 0;i<mid;i++){
            s[a-1-i] =s[i];
        }
        return s; 
    }
};