// Binary Search with Recursion

#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            return recBinarySearch(arr, tar, mid + 1, end);
        } else if (tar < arr[mid]) {
            return recBinarySearch(arr, tar, st, mid - 1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;

    cout << recBinarySearch(arr1, tar, 0, arr1.size() - 1) << endl;
    
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar1 = 0;

    cout << recBinarySearch(arr2, tar1, 0, arr2.size() - 1) << endl;

    return 0;
}
