class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1;
        for(int i=0;i<haystack.size();i++){
            int j=0 , k=i;
            while(haystack[k]==needle[j] && j<needle.size() && k<haystack.size()){
                k++;
                j++;
            }
            if(j==needle.size()){
                index=i;
                break;
            }
        }
        return index;
    }
};