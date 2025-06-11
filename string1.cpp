#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter a line:" ;
    getline(cin,s);

    

    int count=0,count1=0,count2=0, count3=0;

    for(int i=0;i<s.length();i++){

        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }

        else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
            count1++;
        }

        else if(s[i]==' '){
            count2++;
        }

        else{
            count3++;
        }
    }

    cout << " The number of Vowels is :" << count << endl;
    cout << " The number of Consonants is :" << count3<< endl;
    cout << " The number of Digits is :" << count1 << endl;
    cout << " The number of spaces is :" << count2 << endl;
}