class Solution {
public:
    int getLucky(string s, int k) {
        string temp;
        for ( int i= 0 ; i <s.size() ;i++){
            int num = s[i] -'a' +1;
            temp += to_string(num);
        }
        while(k--)
        {
            int num = 0;
            for ( int i = 0 ; i < temp.size() ; i++){
                num += temp[i] - '0';
            }
            temp = to_string(num);
        }
        return stoll(temp);
    }
};