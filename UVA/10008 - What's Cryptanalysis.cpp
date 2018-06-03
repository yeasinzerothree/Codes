#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    cin.ignore();
    int chars[26] = {};
    string s; 

    for (int i = 0; i < n; i++)
    {
        getline(cin, s);

        transform(s.begin(), s.end(), s.begin(), ::toupper);

        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
                chars[s[i] - 65]++;
        }
    }

    array<int, 2> aa[26];

    for (int i = 0; i < 26; i++)
    {
        aa[i][0] = chars[i];
        aa[i][1] = i + 65;
    }

    sort(aa, aa + 26);

    int temp;
    vector<char> vc;

    for (int j = 25; j >= 0; --j)
    {
        //        if(aa[j][0] > 0)
        //        cout << (char) aa[j][1] << " " << aa[j][0] << endl;
        temp = aa[j][0];
        if (temp == 0)
            break;
        vc.push_back((char)aa[j][1]);
        if (aa[j - 1][0] != temp)
        {
            sort(vc.begin(), vc.end());
            for (char x : vc)
                cout << x << " " << temp << endl;
            vc.clear();
        }
    }
}