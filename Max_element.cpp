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

    int max=arr[0];

    for(int i =1;i<n;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }

    cout << "The maximum element of the array is :" << max;
}