#include <bits/stdc++.h>
using namespace std;

// Function to check if array is sorted
bool sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = sorted(arr, n);

    if (isSorted) {
        cout << "The array is sorted";
    } else {
        cout << "The array is not sorted";
    }

    return 0;
}
