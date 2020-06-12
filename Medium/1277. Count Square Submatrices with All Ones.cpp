class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int col = matrix.size();
        int row = matrix[0].size();
        int cont = 0;
        
        for (int i = 1; i < col; i++) {
            for (int j = 1; j < row; j++) {
                if (matrix[i][j] == 1) {
                    int minimum = min(matrix[i-1][j], min(matrix[i-1][j-1], matrix[i][j-1])) + 1;
                    matrix[i][j] = minimum;
                }
            }
        }
        
        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                cont += matrix[i][j];
            }
        }
        return cont;
    }
};
