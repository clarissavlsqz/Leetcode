class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        obstacleGrid[0][0] = -1;
        for (int i = 0; i < obstacleGrid.size(); i++) {
            for (int j = 0; j < obstacleGrid[i].size(); j++) {
               if (obstacleGrid[i][j] < 0) {
                   if (i + 1 < obstacleGrid.size() && obstacleGrid[i+1][j] != 1) {
                       obstacleGrid[i+1][j] += obstacleGrid[i][j];
                   }
                   if (j + 1 < obstacleGrid[i].size() && obstacleGrid[i][j+1] != 1) {
                       obstacleGrid[i][j+1] +=obstacleGrid[i][j];
                   }
               }
            }
        }

        if (obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] == 1) {
            return 0;
        }
        return (obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1]) *-1;
    }
};
