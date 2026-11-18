class Solution {
    private:
    vector<int>nextsmall(vector<int>a ,int n){    
      stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i = n-1; i >= 0; i--) {
            while(s.top() != -1 && a[s.top()] >= a[i])
                s.pop();
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int>prevsmall(vector<int>a ,int n){
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            while(s.top()!=-1 && a[s.top()]>=a[i])
            s.pop();
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }
    int area(vector<int>& a) {
        int n = a.size();
        vector<int> next = nextsmall(a, n);
        vector<int> prev = prevsmall(a, n);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(next[i] == -1) next[i] = n;
            int b = next[i] - prev[i] - 1;
            int side = min(a[i], b);
            ans = max(ans, side * side);
        }
        return ans;
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        // if(n==0) return 0;
        vector<int>h(m,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    h[j]++;
                }
               else
                    h[j] = 0;
            }
            ans = max(ans, area(h));
        }
        return ans;

    }
};