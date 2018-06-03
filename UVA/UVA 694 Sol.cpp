#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long i, l, c = 0;

    while ((cin >> i >> l) && (i > 0 && l > 0)) {
        int s = 0;
        int r = i;
        while (true) {
            if(i == 1) {
                s++;
                break;
            }
            if(i > l)
                break;
            if(i % 2 == 0)
                i /= 2;
            else
                i = 3 * i + 1;
            s++;
        }

        cout << "Case " << ++c << ": A = " << r << ", limit = " << l << ", number of terms = " << s << endl;
    }
}

