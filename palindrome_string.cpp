#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << " Enter the string:";
    getline(cin>>ws, s);

    char temp=0;
    int n=s.length();
    string copy=s;

    for(int i=0;i<n/2;i++){

        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;

    }

    int cnt=0;

    for(int i=0;i<n;i++){
        if(s[i]==copy[i]){
            cnt++;
        }
    }

    if(cnt==n){
        cout<<"The string is palindrome";
    }
    else{
        cout << " The string is not a Plaindrome";
    }
}