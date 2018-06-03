#include <bits/stdc++.h>

using namespace std;

#define F(i, j) for(int i = 0; i < j; i++)
#define R(i, j) for(int i = j - 1; i >= 0; i--)
#define FOR(i, j, k) for(int i = j; i <= k; i+=)

int main() {
    string s;
    vector<string> vc;
    vector<string> vc1;
    vector<string> vc2;
    vector<string> vc3;

    while(getline(cin, s)) {
        if(s == "#")
            break;
        istringstream iss(s);
        string sub;
        while(iss >> sub)
            vc.push_back(sub);
    }
    for(int k = 0; k < vc.size(); k++) {
        auto ss = vc[k];
        transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
        sort(ss.begin(), ss.end());
        vc1.push_back(ss);
    }
    for (int i = 0; i < vc1.size(); ++i) {
        string m = vc1[i];
        int count = 0;
        for (int j = 0; j < vc1.size(); ++j) {
            if(m == vc1[j]) {
                count++;
            }
        }
        if(count == 1)
            vc2.push_back(m);
    }

//    for(auto st : vc)
//        cout << st << endl;

    for (int l = 0; l < vc2.size(); ++l) {
        auto tmp1 = vc2[l];
        for (int i = 0; i < vc.size(); ++i) {
            auto tmp2 = vc[i];
            transform(tmp2.begin(), tmp2.end(), tmp2.begin(), ::tolower);
            sort(tmp2.begin(), tmp2.end());
            if(tmp1 == tmp2) {
                vc3.push_back(vc[i]);
                break;
            }
        }
    }
    sort(vc3.begin(), vc3.end());

    for(auto ans : vc3)
        cout << ans << endl;
}