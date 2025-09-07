#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for(int i = 0; i < size; i += 2) {
        if(i + 1 < size) {
            // swap(arr[i], arr[i + 1]);
            // Instead of using the built in swap fuction you can mannually do it by the following code.
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int even[8] = {4, 6, 9, 0, 5, 3, 8, 1};
    int odd[5] = {0, 3, 5, 2, 7};

    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(odd, 5);
    printArray(odd, 5);
}
