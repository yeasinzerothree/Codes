#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    for (int i = 1; i <= t; ++i) {
        string s, tmp;
        int flag = 0;

        cin >> s;
        if (s.size() == 1) {
            cout << "Case " << i << ": S" << endl;
            continue;
        }
        int c = 0;
        while (!flag) {
            if (s.size() == 1) {
                if (++c % 2 == 0)
                    cout << "Case " << i << ": T" << endl;
                else
                    cout << "Case " << i << ": S" << endl;
                flag = 1;
                continue;
            }
            for (int i = 0; i < s.size(); ++i) {
                tmp = "";

                for (int j = 0; j < i; ++j) {
                    tmp += s[j];
                }
                for (int k = i + 1; k < s.size(); ++k) {
                    tmp += s[k];
                }
                int tmpsum = 0;
                for (char l : tmp) {
                    tmpsum += l - '0';
                }

                if (tmpsum % 3 == 0) {
                    s = tmp;
                    break;
                }
            }
            if (s != tmp) {
                if (c % 2 == 0)
                    cout << "Case " << i << ": T" << endl;
                else
                    cout << "Case " << i << ": S" << endl;
                flag = 1;
                continue;
            }
            c++;
        }
    }
}