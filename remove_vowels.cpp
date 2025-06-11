#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Normalize case
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (!isVowel(s[i])) {
            result += s[i];
        }
    }

    cout << "String after removing vowels: " << result << endl;
    return 0;
}
