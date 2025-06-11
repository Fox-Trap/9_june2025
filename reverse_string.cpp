#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << " Enter the string:";
    cin >> s;

    char temp=0;
    int n=s.length();

    for(int i=0;i<n/2;i++){

        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;

    }

    cout << "The reversed string is :" << s;
}