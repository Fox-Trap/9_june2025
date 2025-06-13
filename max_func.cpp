#include<bits/stdc++.h>
using namespace std;

int max(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int x, y;
    cout<<"Enter the Numbers:" << endl;
    cin >> x >> y;
    int max_num=max(x,y);
    cout << " The maximum of two Numbers is :" << max_num;
}
