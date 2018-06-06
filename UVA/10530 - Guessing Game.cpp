#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


int main() {
    int n;
    int a[11] = {};

    while (cin >> n) {
        if (!n)
            break;

        cin.ignore();
        string s;

        getline(cin, s);

        if (s[4] == 'l')
            for (int i = n; i >= 0; --i)
                a[i] = 1;
        else if (s[4] == 'h')
            for (int j = n; j <= 10; ++j)
                a[j] = 1;
        else {
            if (!a[n])
                cout << "Stan may be honest" << endl;
            else
                cout << "Stan is dishonest" << endl;
            memset(a, 0, sizeof(a));
        }


    }
}