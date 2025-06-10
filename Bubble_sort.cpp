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

    int temp=0;

    for(int i=0;i<n-i;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    cout << " The sorted array is :" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i];
    }

    
}