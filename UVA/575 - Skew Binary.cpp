#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    while (cin >> s) {
        if (s == "0")
            break;

        int dec = 0, t = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            dec += (s[i] - '0') * (pow(2, ++t) - 1);
        }

        cout << dec << endl;
    }
}