class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int cnt = 1;
        bool flag = false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) cnt++;
            else{
                if(cnt==k) 
                flag = true;
                cnt = 1;
            }
        }

        if(cnt==k) 
        flag = true;
        return flag;
    }
};