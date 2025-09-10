#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Index of smallest element: " << minIndex << endl;
    cout << "Index of largest element: " << maxIndex << endl;

    return 0;
}
