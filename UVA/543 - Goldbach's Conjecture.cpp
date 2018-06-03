#include <bits/stdc++.h>

using namespace std;

int main() {
    bool primes[1000001];

    memset(primes, true, sizeof(primes));
    primes[0] = false;


    for (int i = 2; i * i <= 1000000; ++i) {
        if (primes[i]) {
            for (int j = i * 2; j <= 1000000; j += i) {
                primes[j] = false;
            }
        }
    }

    int n;

    while (cin >> n) {
        if (!n)
            break;
        int flag = 1;
        for (int i = 2; i < n; ++i) {

            if (primes[n - i] && primes[i]) {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << n << " = 0 + " << n << endl;


    }

}