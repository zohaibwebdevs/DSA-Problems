#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

// Maximum Array Sum using Brute Force

    int maxSum = INT_MIN;
    

    // for(int start=0; start<n; start++) {
    //     int currSum = 0;
    //     for(int end=start; end<n; end++) {
    //         currSum += arr[end];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }

    // cout << "Maximum Subarray sum = " << maxSum << endl;

// Maximum Subarray Sum Using Kadane's Algorithm

    for(int i=0; i<n; i++) {
        int currSum = 0;
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << maxSum << endl;
}