#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int row = board.size();
        int col = board[0].size();
        if(click[0] < 0 || click[0] >= row || click[1] < 0 || click[1] >= col){
            return board;
        }
        if(board[click[0]][click[1]] == 'M'){
            board[click[0]][click[1]] = 'X';
            return board;
        }
        if(board[click[0]][click[1]] == 'B' ||
           (board[click[0]][click[1]] >= '1'&&
            board[click[0]][click[1]] <= '8')){
            return board;
        }
        dfs(board, click[0], click[1]);
        return board;
    }
    void dfs(vector<vector<char>> &board, int i, int j){
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'E'){
            return;
        }
        int sum = 0;
        for(int k = 0; k < x.size(); k++){
            if(i+x[k] >= 0 && i+x[k] < board.size() &&
               j+y[k] >= 0 && j+y[k] < board[0].size()){
                if(board[i+x[k]][j+y[k]] == 'M'){
                    sum++;
                }
            }
        }
        if(sum == 0){
            board[i][j] = 'B';
            for(int k = 0; k < x.size(); k++){
                dfs(board, i+x[k], j+y[k]);
            }
        }else{
            board[i][j] = '0' + sum;
        }
        return;
    }
private:
    vector<int> x{-1,-1,-1,0,0,1,1,1};
    vector<int> y{-1,0,1,-1,1,-1,0,1};
};
int main() {
    Solution s;
    vector<vector<char>> board{{'E', 'E', 'E', 'E', 'E'}, {'E', 'E', 'M', 'E', 'E'},
                          {'E', 'E', 'E', 'E', 'E'}, {'E', 'E', 'E', 'E', 'E'}};
    vector<int> click{3, 0};
    vector<vector<char>> result = s.updateBoard(board, click);
    for(auto it = board.begin(); it != board.end(); it++){
        for(auto i:*it){
            cout << i << '\t';
        }
        cout << endl;
    }
    return 0;
}
