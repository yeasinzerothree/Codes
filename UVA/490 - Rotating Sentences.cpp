#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> vc;

    string s;
    int t = 2;
    int max = 0;
    while (getline(cin, s)) {
        
        vc.push_back(s);

        if (s.size() > max)
            max = s.size();
    }

    char ch[max][vc.size()];
    int index = 0;
    for (int i = vc.size() - 1; i >= 0; i--, index++) {
        for (int j = 0; j < vc[i].size(); j++) {
            ch[j][index] = vc[i][j];
        }

        for (int j = vc[i].size(); j < max; j++)
            ch[j][index] = ' ';
    }

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < vc.size(); j++)
            cout << ch[i][j];
        cout << endl;
    }

}