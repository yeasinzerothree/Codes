#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n_th_ugly_number(int n) {
    ll ugly[n];

    ll i2 = 0, i3 = 0, i5 = 0;

    ll next_multiple_of_2 = 2;
    ll next_multiple_of_3 = 3;
    ll next_multiple_of_5 = 5;
    ll next_ugly_number;

    ugly[0] = 1;

    for (int i = 1; i < n; ++i) {
        next_ugly_number = min(next_multiple_of_2, min(next_multiple_of_3, next_multiple_of_5));

        ugly[i] = next_ugly_number;

        if(ugly[i] == next_multiple_of_2) {
            i2++;
            next_multiple_of_2 = ugly[i2] * 2;
        }
        if(ugly[i] == next_multiple_of_3) {
            i3++;
            next_multiple_of_3 = ugly[i3] * 3;
        }
        if(ugly[i] == next_multiple_of_5) {
            i5++;
            next_multiple_of_5 = ugly[i5] * 5;
        }
    }
    return ugly[n - 1];
}

int main() {
    cout << "The 1500'th ugly number is " << n_th_ugly_number(1500) << "." << endl;
}
