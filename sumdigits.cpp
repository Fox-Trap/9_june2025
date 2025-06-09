#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,d,sum=0;
    cout<< " Enter the Number:" << endl;
    cin >> n;
    while (n>0){
        d=n%10;
        sum=sum+d;
        n=n/10;
    }

    cout << " The Sum Of digits is : " << sum <<endl;
}