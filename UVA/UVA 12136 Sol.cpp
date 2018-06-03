#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, count = 0;

    cin >> t;
    getchar();

    while (t--) {
        string s1, s2;
        bool flag = true;
        int st1, st2, en1, en2;
        int time[2401] = {};

        getline(cin, s1);
        getline(cin, s2);

        st1 = stoi(s1.substr(0,2) + s1.substr(3,2));
        st2 = stoi(s2.substr(0,2) + s2.substr(3,2));
        en1 = stoi(s1.substr(6,2) + s1.substr(9,2));
        en2 = stoi(s2.substr(6,2) + s2.substr(9,2));

        for (int i = st1; i <= en1 ; ++i)
            time[i]++;
        for (int i = st2; i <= en2 ; ++i)
            time[i]++;
        for (int i = 0; i < 2401; ++i) {
            if(time[i] > 1) {
                flag = false;
                break;
            }
        }
        string a = (flag) ? "Hits Meeting" : "Mrs Meeting";

        cout << "Case " << ++count << ": " << a << endl;
    }
}

