class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> result;
        for (int x : nums) {
            result.push(x);
        }
        int count = 0;
     while (result.top() < k) {
            long long a = result.top();
            result.pop();
            long long b = result.top();
            result.pop();
            long long val = a * 2 + b;
            result.push(val);
            count++;
        }
        return count;
    }
};