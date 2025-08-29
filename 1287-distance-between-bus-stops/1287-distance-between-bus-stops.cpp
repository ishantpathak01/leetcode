class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int sumTotal=0;
        int sum=0;
        if(start>destination)
        {
            swap(start,destination);
        }
        for(int j=start;j<destination;j++)
        {
            sum+=distance[j];
        }
        for(int i=0;i<distance.size();i++)
        {
            sumTotal+=distance[i];
        }
        int r=sumTotal-sum;
        return min(r,sum);
        
    }
};