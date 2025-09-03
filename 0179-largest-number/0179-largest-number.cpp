class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        for (int n : nums) arr.push_back(to_string(n));
        sort(arr.begin(), arr.end(), [](string &a, string &b){ 
            return a+b > b+a; 
            }
 );
        string ans;
        for (auto &s : arr) ans += s;
        if(ans[0]=='0') return "0";
        return ans;
    }
};
