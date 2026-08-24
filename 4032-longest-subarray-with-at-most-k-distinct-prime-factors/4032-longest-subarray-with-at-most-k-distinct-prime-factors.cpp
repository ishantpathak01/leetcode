class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        vector<int>val=nums;
        int n=nums.size();
        vector<vector<int>> result(n);
        for(int i=0;i<n;i++){
            int a=val[i];
            for(int j=2;j*j<=a;j++){
                if(a%j==0){
                    result[i].push_back(j);
                    while(a%j==0){
                        a=a/j;
                    }
                }
            }
            if(a>1){
                result[i].push_back(a);
            }
        }
        unordered_map<int,int>freq;
        int left=0;
        int dist=0;
        int fin=0;
        for(int right=0;right<n;right++){
            for(int b:result[right]){
                if(freq[b]==0){
                    dist++;
                }
                freq[b]++;
            }
            while(dist>k){
                for(int b: result[left]){
                    freq[b]--;
                    if(freq[b]==0){
                        dist--;
                    }
                }
                    left++;
                }
                fin=max(fin,right-left+1);
            
        }
        return fin;
    }
};