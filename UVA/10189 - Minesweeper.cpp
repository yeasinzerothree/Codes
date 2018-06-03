#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, c = 0;

    while (cin >> m >> n)
    {
        if (m + n == 0)
            break;
        cin.ignore();
        char ch[m + 2][n + 2];

        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                cin >> ch[i][j];
        for (int k = 0; k < m +  2; ++k) {
            for (int i = 0; i < n + 2; ++i) {
                if(k == 0 || k == m + 1 || i == 0 || i == n + 1)
                    ch[k][i] = 'x';
            }
        }
        if (c != 0)
            cout << endl;
        cout << "Field #" << ++c << ":" << endl;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ch[i][j] == '*')
                    cout << ch[i][j];
                else
                {
                    int count = 0;

                    if (ch[i][j - 1] == '*')
                        count++;
                    if (ch[i][j + 1] == '*')
                        count++;
                    if (ch[i + 1][j] == '*')
                        count++;
                    if (ch[i + 1][j - 1] == '*')
                        count++;
                    if (ch[i + 1][j + 1] == '*')
                        count++;
                    if (ch[i - 1][j] == '*')
                        count++;
                    if (ch[i - 1][j - 1] == '*')
                        count++;
                    if (ch[i - 1][j + 1] == '*')
                        count++;
                    cout << count;
                }
            }
            cout << endl;
        }
    }
}