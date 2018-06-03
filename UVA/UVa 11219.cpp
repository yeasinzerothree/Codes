#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    int t, y2, y1, m2, m1, d2, d1;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        scanf("%d/%d/%d", &d2, &m2, &y2);

        scanf("%d/%d/%d", &d1, &m1, &y1);

        if (d2 < d1) {
            d2 += 30;
            m2--;
        }

        d2 -= d1;

        if (m2 < m1) {
            m2 += 12;
            y2--;
        }

        m2 -= m1;

        y2 -= y1;

        if(y2 < 0)
            cout << "Case #" << i << ": Invalid birth date" << endl;
        else if(y2 > 130)
            cout << "Case #" << i << ": Check birth date" << endl;
        else
            cout << "Case #" << i << ": " << y2 << endl;

    }

}
