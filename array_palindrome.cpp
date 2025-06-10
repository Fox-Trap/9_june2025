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
     int copy[n];
    for(int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }


    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==copy[i]){
            count++;
            
        }
        
            
        
    }

    if(count==n){
        cout << " The array is palindrome";
    }
    else{
        cout << " The array is not Plaindrome";
    }
    
}