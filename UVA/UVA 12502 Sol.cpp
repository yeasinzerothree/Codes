#include <iostream>
#include <math.h>

using namespace std;

string reverse(string s);

int main() {
    int t;

    cin >> t;

    for (int i = 1; i <= t ; ++i) {
        float a, b, c, m;

        cin >> a >> b >> m;

        c = (a + b) / 3;

        cout << round(((a - c) / c) * m) << endl;
    }

}