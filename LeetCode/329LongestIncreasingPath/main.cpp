#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 || matrix[0].size() == 0){
            return 0;
        }
        vector<vector<int>> flag(matrix.size(), vector<int>(matrix[0].size(), 0));
        int row = matrix.size();
        int col = matrix[0].size();
        int res = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                res = max(res, longestIncreasingValue(matrix, i, j, row, col, flag, INT_MIN));
            }
        }
        return res;
    }
    int longestIncreasingValue(vector<vector<int>> &matrix, int i, int j,
                               int row, int col, vector<vector<int>> &flag, int pre){
        if(i >= row || j >= col || i < 0 || j < 0 || matrix[i][j] <= pre){
            return 0;
        }
        if(flag[i][j] > 0){
            return flag[i][j];
        }
        int r = longestIncreasingValue(matrix, i + 1, j, row, col, flag, matrix[i][j]);
        int l = longestIncreasingValue(matrix, i - 1, j, row, col, flag, matrix[i][j]);
        int down = longestIncreasingValue(matrix, i, j - 1, row, col, flag, matrix[i][j]);
        int up = longestIncreasingValue(matrix, i, j + 1, row, col, flag, matrix[i][j]);
        flag[i][j] = 1 + max(max(l, r), max(down, up));
        return flag[i][j];
    }
};
int main() {
    vector<vector<int>> input{{9,9,4},{6,6,8},{2,1,1}};
    Solution s;
    int result = s.longestIncreasingPath(input);
    cout << result << endl;
    return 0;
}
