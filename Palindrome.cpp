#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,d,rev=0;
    cout<< " Enter the Number:" << endl;
    cin >> n;
    int copy=n;
    while (n>0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }

    if(copy=rev){
        cout<< " The numer is Palindrome";
    }
    else{
        cout << "The number is Not Palindrome";
    }

    return 0;
}