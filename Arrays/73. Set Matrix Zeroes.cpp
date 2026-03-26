class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> copy = matrix;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0){
                    for(int l = 0; l < col; l++) copy[i][l] = 0;
                    for(int m = 0; m < row; m++) copy[m][j] = 0;
                }
            }
        }
        matrix = copy;
    }
};