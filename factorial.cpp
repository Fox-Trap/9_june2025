#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , i,f=1;
    cout<< "Enter the number" << endl;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
        
    }
    cout << "The factorial is :" << f;
    return 0;
    

}