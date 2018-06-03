#include <bits/stdc++.h>

using namespace std;

#define F(i, j) for(int i = 0; i < j; i++)
#define R(i, j) for(int i = j - 1; i >= 0; i--)
#define FOR(i, j, k) for(int i = j; i <= k; i+=)

int main() {
    string s;

    while (cin >> s) {
        vector<string> vc;
        int count = 0;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i; j < s.size(); ++j) {
                string t = "";
                for (int k = i; k <= j; ++k) {
                    t += s[k];
                }
                if (t == string(t.rbegin(), t.rend())) {
                    int flag = 1;

                    for (string w : vc)
                        if (w == t)
                            flag = 0;
                    if (flag)
                        vc.push_back(t);
                }
            }
        }
        cout << "The string '" << s << "' contains " << vc.size();
        if(vc.size() > 1)
            cout <<" palindromes." << endl;
        else
            cout <<" palindrome." << endl;
    }
}