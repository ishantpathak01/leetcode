class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int ans=INT_MIN;
        for(int i=n-1;i>=n-k;i--){
            int val=0;
            for(int j=i;j>=0;j-=k){
                val+=energy[j];
                ans=max(ans,val);
            }
        }
        return ans;
    }
};