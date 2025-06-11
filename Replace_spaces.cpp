#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }

    cout << "String after replacing spaces: " << s << endl;
    return 0;
}
