#include <bits/stdc++.h>

using namespace std;

string addLargeNumbers(string s1, string s2) {
    if(s1.size() > s2.size())
        swap(s1, s2);

    string str = "";

    int carry = 0;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int n1 = s1.length();
    int n2 = s2.length();

    for(int i = 0; i < n1; i++) {
        int sum = (s1[i] - '0') + (s2[i] - '0') + carry;

        str.push_back((sum % 10) + '0');

        carry = sum /10;

    }

    for(int i = n1; i < n2; i++) {
        int sum = s2[i] - '0' + carry;
        str.push_back((sum % 10) + '0');

        carry = sum / 10;
    }
    if(carry)
        str.push_back(carry + '0');

    reverse(str.begin(), str.end());

    return str;

}

int main()
{
    string s;
    vector<string> vc;

    while(cin >> s) {
        if(s == "0")
            break;

        vc.push_back(s);
    }

    string s1 = vc[0], s2, sum;

    for(int i = 1; i < vc.size(); i++) {
        s2 = vc[i];
        sum = addLargeNumbers(s1, s2);
        s1 = sum;
    }

    cout << sum << endl;
}