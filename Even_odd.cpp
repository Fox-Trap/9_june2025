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

    int count=0,count1=0;

    for(int i =0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            count1++;
        }
    }

    cout<<"The number of even elements is:" << count<< endl;
    cout<<"The number of odd elements is:" << count1;

    
}