#include <bits/stdc++.h>
using namespace std;

int countVowels(string s) {
    int count = 0;
    for(char ch : s) {
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vowelCount = countVowels(str);
    cout << "Number of vowels: " << vowelCount;
}
