#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, flag;

    while (cin >> n) {
        int arr[n];
        flag = 1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int nn[n] = {};
        nn[0] = 1;

        for (int i = 1; i < n; i++) {
            if (abs(arr[i] - arr[i - 1]) < n)
                nn[abs(arr[i] - arr[i - 1])] = 1;
            else {
                nn[1] = INT_MIN;
                break;
            }
        }

        sort(nn, nn + n);

        if (nn[0] == 1)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}