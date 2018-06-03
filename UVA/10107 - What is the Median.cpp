#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, c = 0;
    vector<int> vc;

    while(cin >> x ) {
        vc.push_back(x);
        sort(vc.begin(), vc.end());
        if(++c % 2)
            cout << vc[c / 2] << endl;
        else {
            cout << (vc[c/2 - 1] + vc[c/2]) / 2 << endl;
        }
    }
}