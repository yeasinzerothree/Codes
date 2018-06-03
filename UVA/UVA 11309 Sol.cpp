#include <bits/stdc++.h>

using namespace std;

#define F(i, j) for(int i = 0; i < j; i++)
#define R(i, j) for(int i = j - 1; i >= 0; i--)
#define FOR(i, j, k) for(int i = j; i <= k; i+=)

int main() {
    string s;
    int is_pal[2400] = {};

    for (int i = 0; i < 2400; ++i) {
        s = to_string(i);
        int aa = 0;
        if(s.size() == 2)
            aa = stoi(s);
        else if(s.size() == 3)
            aa = stoi(s.substr(1,2));
        else if(s.size() == 4)
            aa = stoi(s.substr(2,2));

        if(s == string(s.rbegin(), s.rend()) && aa <= 59)
            is_pal[i] = 1;
    }

    int t;

    cin >> t;

    while (t--) {
        string s;

        cin >> s;

        s = s.substr(0,2) + s.substr(3,2);

        int a = stoi(s);
        if(a >= 2332) {
            cout << "00:00" << endl;
            continue;
        }
        for (int i = a + 1; i < 2400; ++i) {
            if(is_pal[i] == 1) {
                if(to_string(i).size() == 1)
                    cout << "00:0" << i << endl;
                else if(to_string(i).size() == 2)
                    cout << "00:" << i << endl;
                else{
                    string n = to_string(i);
                    if(n.size() == 3)
                        cout << "0" << n[0] << ":" << n.substr(1) << endl;
                    else if(n.size() == 4)
                        cout << n.substr(0,2) << ":" << n.substr(2) << endl;
                }
                break;
            }

        }
    }
}