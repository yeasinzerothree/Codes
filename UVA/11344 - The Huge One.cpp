#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int sum_dig(string s) {
    int sum = 0;

    for (int i = 0; i < s.size(); ++i) {
        sum += s[i] - '0';
    }

    return sum;
}

bool divBy_1(string s) {
    return true;
}

bool divBy_2(string s) {
    return (s[s.size() - 1] - '0') % 2 == 0;
}

bool divBy_3(string s) {
    int sum = 0;
    for (char c : s)
        sum += c - '0';
    return sum % 3 == 0;
}

bool divBy_4(string s) {

    if (s.size() < 2) return stoi(s) % 4 == 0;
    return stoi(s.substr(s.size() - 2, 2)) % 4 == 0;
}

bool divBy_5(string s) {
    return (s[s.size() - 1] - '0') % 5 == 0;
}

bool divBy_6(string s) {
    return divBy_2(s) && divBy_3(s);
}

bool divBy_7(string s) {
    int sum = 0;

    if (s.size() % 3 == 1)
        s.insert(0, "00");
    else if (s.size() % 3 == 2)
        s.insert(0, "0");
    vector<string> vc;

    for (int i = 0; i < s.size() - 2; i += 3) {
        vc.push_back(s.substr(i, 3));
    }
    for (int j = vc.size() - 1, i = 0; j >= 0; --j, i++) {
        stringstream ss(vc[j]);
        int l;
        ss >> l;

        if (i % 2)
            l = (-1) * l;
        sum += l;
    }

    return sum % 7 == 0;
}

bool divBy_8(string s) {
    if (s.size() % 3 == 1)
        s.insert(0, "00");
    else if (s.size() % 3 == 2)
        s.insert(0, "0");
    return stoi(s.substr(s.size() - 3, 3)) % 8 == 0;
}

bool divBy_9(string s) {
    int sum = 0;
    for (char c: s)
        sum += c - '0';
    return sum % 9 == 0;
}

bool divBy_10(string s) {
    return divBy_2(s) && divBy_5(s);
}

bool divBy_11(string s) {
    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        int t = s[i] - '0';
        if (i % 2 == 1)
            t = (-1) * t;
        sum += t;
    }

    return sum % 11 == 0;
}

bool divBy_12(string s) {
    return divBy_4(s) && divBy_3(s);
}

int main() {
    int n;

    cin >> n;
    cin.ignore();

    while (n--) {
        string s;

        cin >> s;
        int x;
        cin >> x;
        int flag = 0;
        int tmp = x;
        int check = 0;

        while (x--) {
            int y;

            cin >> y;

            if (y == 1)
                check += divBy_1(s);
            else if (y == 2)
                check += divBy_2(s);
            else if (y == 3)
                check += divBy_3(s);
            else if (y == 4)
                check += divBy_4(s);
            else if (y == 5)
                check += divBy_5(s);
            else if (y == 6)
                check += divBy_6(s);
            else if (y == 7)
                check += divBy_7(s);
            else if (y == 8)
                check += divBy_8(s);
            else if (y == 9)
                check += divBy_9(s);
            else if (y == 10)
                check += divBy_10(s);
            else if (y == 11)
                check += divBy_11(s);
            else if (y == 12)
                check += divBy_12(s);
        }
        if (sum_dig(s) == 0) {
            cout << "0 - Wonderful." << endl;
            continue;
        }

        if (tmp == check)
            cout << s << " - Wonderful." << endl;
        else
            cout << s << " - Simple." << endl;
    }


}