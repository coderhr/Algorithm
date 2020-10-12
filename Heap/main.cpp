#include <iostream>
#include<vector>

using namespace std;

void AdjustHeap(vector<int> &arr, int index, int len){
    int left = index*2 + 1;
    int right = index*2 + 2;
    int max = index;

    if(left < len && arr[left] > arr[max]){
        max = left;
    }

    if(right < len && arr[right] > arr[max]){
        max = right;
    }

    if(max != index){
        swap(arr[max], arr[index]);
        AdjustHeap(arr, max, len);
    }
    return;
}

void HeapSort(vector<int> & arr){
    int len = arr.size();
    for(int i = len/2-1; i >=0; i--){
        AdjustHeap(arr, i, len);
    }

    for(int i = len - 1; i >= 0; i--){
        swap(arr[i], arr[0]);
        AdjustHeap(arr, 0, i);
    }
    return;
}

int main() {
    vector<int> arr{0, 1, 8, 3, 9, 2, 4, 7};
    HeapSort(arr);
    //priority_queue<int, vector<int>, greater<int> > q;
    //for(auto it = arr.begin(); it != arr.end(); it++){
    //    q.push(*it);
    //}
    //while(!q.empty()){
    //    int temp = q.top();
    //    q.pop();
    //    cout << temp << endl;
    //}
    for(auto it:arr){
        cout << it << endl;
    }
    return 0;
}
