class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int k=0;
        while(i<n){
            int c=0;
            char ch=chars[i];
            while(i<n && chars[i]==ch){
                c++;
                i++;
            }
            chars[k++]=ch;
            if(c>1){
                string s=to_string(c);
                for(int j=0;j<s.size();j++){
                    chars[k++]=s[j];
                }
            }
        }
        return k;
    }
};