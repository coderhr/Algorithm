#include <iostream>
#include <vector>

using namespace std;

int Partion(vector<int> &arr, int left, int right){
    int value = arr[left];
    while(left < right){
        while(right > left && arr[right] >= value){
            right--;
        }
        arr[left] = arr[right];
        while(right > left && arr[left] <= value){
            left++;
        }
        arr[right] = arr[left];
    }
    arr[left] = value;
    return left;
}
void QuickSort(vector<int> &arr, int left, int right){
    if(left >= right){
        return;
    }
    int position = Partion(arr, left, right);
    QuickSort(arr, left, position-1);
    QuickSort(arr, position+1, right);
    return;
}

int main() {
    vector<int> arr{0, 1, 8, 3, 9, 2, 4, 7};
    QuickSort(arr, 0, arr.size()-1);
    for(auto it:arr){
        cout << it << endl;
    }
    return 0;
}
