class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.empty()) return arr;
        vector<int> arr1=arr;
        sort(arr1.begin(),arr1.end());

        map<int ,int> rank;
        int count=1;
        for(int i=0; i<=arr1.size()-1;i++){
               if(rank[arr1[i]]==0){
                    rank[arr1[i]]=count;
                    count++;
               }
        }

        for(int i=0; i<=arr.size()-1;i++){
            arr[i]=rank[arr[i]];
        }

return arr;
    }
};