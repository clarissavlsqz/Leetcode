class Solution {
public:
    int uniquePaths(int m, int n) {
        int mat[100][100];
        memset(mat,0,sizeof(mat));
        mat[0][0] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] > 0) {
                    if (i+1 < n) {
                        mat[i+1][j] += mat[i][j];
                     }
                    if (j + 1 < m) {
                        mat[i][j+1] += mat[i][j];
                    }
                }     
            }
        }
        return mat[n-1][m-1];
    }
};
