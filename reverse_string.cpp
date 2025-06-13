#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    int n = s.length();
    for(int i = 0; i < n/2; i++) {
        swap(s[i], s[n-i-1]);
    }
    return s;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed;
}
