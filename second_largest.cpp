#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize first and second largest
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;     // old first becomes second
            first = arr[i];     // new largest
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];    // new second largest
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}
