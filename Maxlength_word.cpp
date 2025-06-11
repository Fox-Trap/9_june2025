#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    int cnt=0, max_length=0;

    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            cnt++;
        }
        else{
        
            if(max_length<cnt){
                max_length=cnt;
            }
            cnt=0;
        }

        if(max_length<cnt){
            max_length=cnt;
        }
    }

    cout << "The length of longest word is :" << max_length;
    return 0;

}
