class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i + 1; j <matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int k = 0; k < matrix.size(); k++){
            int i =0;
            int j =matrix.size()- 1;
            while(i<j){ 
                swap(matrix[k][i], matrix[k][j]);
                i++;
                j--;
            }
        }
    }
};