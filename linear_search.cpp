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

    int search_element=0, count=0;
    cout << "Enter the element to be searched" << endl;
    cin >> search_element;

    for(int i=0;i<n;i++){
        if(arr[i]==search_element){
            count++;
            break;
        }
        
    }

    if(count==1){
        cout << "The element is present";
    }
    else{
        cout << " The element is not present";
    }

    
}