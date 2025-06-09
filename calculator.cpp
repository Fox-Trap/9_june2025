#include<bits/stdc++.h>
using namespace std;

int main (){
    int a, b , sum , mul, sub;
    float div;
    char ch;
    cout << "Enter The Numbers" << endl;
    cin >> a >> b;
    cout<< "Enter the choice" << endl;
    cin >> ch;
    switch (ch)
    {
    case '1':
        sum =a+b;
        cout << "The sum is :"<< sum << endl;
        break;

    case '2' :
        
        if(a>b){
            sub = a-b;
        }
        else{
            sub= b-a;
        }
        cout << "The subtraction is : "<< sub << endl;
        break;

    case '3' :
         mul=a*b;
        cout << " The multiplication is :" <<mul << endl;
        break;

    case '4' :
        div=a/b;
        cout<< " The division is:"<< div << endl;
        break;
    
    default:
        cout << "Wrong Choice";
        break;
    }
}