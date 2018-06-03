#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    ll t, i = 1;

    while (cin >> t) {
        ll ar[t], max = 0;

        for (int i = 0; i < t; ++i) {
            cin >> ar[i];
        }

        for (int j = 0; j < t; ++j) {
            ll sum = 1;
            for (int k = j; k < t; ++k) {
                if(ar[k] == 0)
                    break;
                sum *= ar[k];
                if(sum > max)
                    max = sum;
            }
        }
        cout << "Case #" << i++ << ": The maximum product is " << max << "." << endl;
        cout << endl;
    }

}
