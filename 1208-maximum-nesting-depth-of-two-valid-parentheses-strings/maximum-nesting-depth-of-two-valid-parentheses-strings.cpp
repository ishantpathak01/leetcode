class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int curr = 0;
        int n = seq.size();
        vector<int>result(n, 0);
        for(int i=0;i<n;i++){
            if(seq[i] == '('){
                curr = (curr + 1) % 2;
                result[i] = curr;        
            }
            else {
                result[i] = curr;
                curr = (curr + 1) % 2;
            }
        }

        return result;
    }
};