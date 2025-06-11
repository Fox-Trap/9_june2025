#include<bits/stdc++.h>
using namespace std;


int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string up = str, low = str;
    transform(up.begin(), up.end(), up.begin(), ::toupper);
    transform(low.begin(), low.end(), low.begin(), ::tolower);

    cout << "Uppercase (STL): " << up << endl;
    cout << "Lowercase (STL): " << low << endl;

    return 0;
}