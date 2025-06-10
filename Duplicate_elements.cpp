#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique[n];  // max n unique values possible
    int uniqueCount = 0;

    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] is already in unique[]
        for(int j = 0; j < uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique[]
        if(!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < uniqueCount; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
