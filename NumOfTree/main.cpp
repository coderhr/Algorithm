#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

void CalNumber(vector<char> &pre, vector<char> &pos,
               int pre_l, int pre_r, int pos_l, int pos_r, int &count){
    if(pre_l >= pre_r){
        return;
    }
    int i;
    for(i = pos_l; i < pos_r; i++){
        if(pre[pre_l] == pos[i]){
            break;
        }
    }
    if(i == pos_r){
        count++;
    }
    CalNumber(pre, pos, pre_l+1, pre_l + 1 + i - pos_l, pos_l, i, count);
    CalNumber(pre, pos, pre_l + 1 + i - pos_l + 1, pre_r, i+1, pos_r, count);
    return;
}

int main(){
    vector<char> pre{'A', 'B', 'C', 'D'};
    vector<char> pos{'C', 'B', 'D', 'A'};
    int count = 0;
    CalNumber(pre, pos, 0, 3, 0, 3, count);
    cout << pow(2, count) << endl;
    return 0;
}