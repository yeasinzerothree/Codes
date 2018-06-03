#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0;

    while (cin >> n) {
        if (!n)
            break;
        int flag = 0;
        if (x++ != 0)
            cout << endl;
        for (int i = 1234; i <= 98765 / n; ++i) {
            int p = i * n;
            int a = p;
            int arr[10] = {};

            if (to_string(a).size() == 4)
                arr[0]++;
            while (a) {
                arr[a % 10]++;
                a = a / 10;
            }
            a = i;
            if (to_string(a).size() == 4)
                arr[0]++;
            while (a) {
                arr[a % 10]++;
                a = a / 10;
            }

            sort(arr, arr + 10);

            if (arr[0] == 1 && arr[9] == 1) {
                cout << setfill('0') << setw(5) << p << " / " << setw(5) << i << " = " << n <<  endl ;
                flag = 1;
            }

        }

        if (!flag)
            cout << "There are no solutions for " << n << "." << endl;
    }
}