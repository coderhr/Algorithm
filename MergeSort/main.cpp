#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<int> &arr, int left, int mid, int right){
    int i, j, k;
    i = left;
    j = mid+1;
    k = 0;
    vector<int> result(right - left + 1, 0);
    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            result[k++] = arr[i++];
        }else{
            result[k++] = arr[j++];
        }
    }
    while(i <= mid){
        result[k++] = arr[i++];
    }
    while(j <= right){
        result[k++] = arr[j++];
    }
    int index = 0;
    for(int i = left; i <= right; i++){
        arr[i] = result[index++];
    }
    return;
}

void MergeSort(vector<int> & arr, int left, int right){
    if(left >= right){
        return;
    }
    int mid = (left + right)/2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid+1, right);
    Merge(arr, left, mid, right);
    return;
}
int main() {
    vector<int> arr{0, 1, 8, 3, 9, 2, 4, 7};
    MergeSort(arr, 0, arr.size() - 1);
    for(auto it:arr){
        cout << it << endl;
    }    return 0;
}
