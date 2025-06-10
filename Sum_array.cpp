#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int sum=0;

    for(int i =0;i<n;i++){
        sum = sum+arr[i];
    }

    cout << "The sum of array elements is:" << sum;
}