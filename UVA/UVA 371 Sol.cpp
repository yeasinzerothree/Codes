#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

long getsequences(long n);

int main() {
    long l, h;

    while (cin >> l >> h) {
        if (h == 0 && l == 0)
            break;

        if (h < l) {
            long t = h;
            h = l;
            l = t;
        }
        long n = h - l + 1;
        long seq[n];

        for (long i = l, j = 0; i <= h; ++i, ++j) {
            seq[j] = getsequences(i);
        }

        long max = seq[0];
        long max_i = 0;

        for (int k = 0; k < n; ++k) {
            if (max < seq[k]) {
                max = seq[k];
                max_i = k;
            }
        }

        cout << "Between " << l << " and " << h << ", " << (l + max_i) << " generates the longest sequence of " << max
             << " values." << endl;
    }
}

long getsequences(long n) {
    long count = 1;

    n = (n % 2 == 0) ? n / 2 : 3 * n + 1;

    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

