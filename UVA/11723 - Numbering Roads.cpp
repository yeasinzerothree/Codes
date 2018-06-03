#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ll n, r, t = 0;

    while (cin >> r >> n) {
        ll ans = 0;
        if (r + n == 0)
            break;

        if (r <= n)
            cout << "Case " << ++t << ": 0" << endl;
        else if(n * 26 + n < r)
            cout << "Case " << ++t << ": impossible" << endl;
        else {
            int i = 0;
            r -= n;
            for (i = 1; i <= 26 && r > 0; ++i) {
                r -= n;
            }

            cout << "Case " << ++t << ": " << --i << endl;
        }
    }
}