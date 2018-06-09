#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool isPalindrome(string s) {
    return s == string(s.rbegin(), s.rend());
}

bool isMirrored(string s) {
    string s1;

    for (int i = 0; i < s.size(); ++i) {

        if (s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == '1' || s[i] == '8' ||
            s[i] == 'A' || s[i] == 'I' || s[i] == 'M' || s[i] == 'O' || s[i] == 'T' || s[i] == 'H')
            s1 += s[i];
        else if (s[i] == 'E')
            s1 += '3';
        else if (s[i] == 'J')
            s1 += 'L';
        else if (s[i] == 'L')
            s1 += 'J';
        else if (s[i] == 'S')
            s1 += '2';
        else if (s[i] == 'Z')
            s1 += '5';
        else if (s[i] == '2')
            s1 += 'S';
        else if (s[i] == '3')
            s1 += 'E';
        else if (s[i] == '5')
            s1 += 'Z';
        else
            return false;
    }

    return s1 == string(s.rbegin(), s.rend());
}

int main() {
    string s;


    while (cin >> s) {
        if (isPalindrome(s) && isMirrored(s))
            cout << s << " -- is a mirrored palindrome.\n" << endl;
        else if (isPalindrome(s) && !isMirrored(s))
            cout << s << " -- is a regular palindrome.\n" << endl;
        else if (isMirrored(s) && !isPalindrome(s))
            cout << s << " -- is a mirrored string.\n" << endl;
        else
            cout << s << " -- is not a palindrome.\n" << endl;
    }

}