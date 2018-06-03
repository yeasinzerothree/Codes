#include <iostream>

using namespace std;

string reverse(string s);

int main() {
    string s;

    while (getline(cin, s)) {

        if (s == "*")
            break;

        string sub[50];
        int j = 0;
        bool flag = true;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ')
                sub[j] += tolower(s[i]);
            else
                j++;
        }

        for (int i = 0; i < j; i++) {
            if (sub[i][0] != sub[i + 1][0]) {
                flag = false;
                break;
            }
        }
        string a = (flag) ? "Y" : "N";

        cout << a << endl;
    }
}