#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int m, n;

    while(cin >> m >> n) {
        if(m + n == 0)
            break;

        int heads[m], knights[n];

        for(int i = 0; i < m; i++)
            cin >> heads[i];
        for(int i = 0; i < n; i++)
            cin >> knights[i];



        if(m > n)
            cout << "Loowater is doomed!" << endl;

        else {
            sort(heads, heads + m);
            sort(knights, knights + n);

                int i, j, k = 0, count = 0, cost = 0;

                for(i = 0; i < m; i++) {
                    for(j = k; j < n; j++) {
                        if(knights[j] >= heads[i]) {
                            cost += knights[j];
                            count++;
                            k = ++j;
                            break;
                        }
                    }
                }

                if(count == m)
                    cout << cost << endl;
                else
                    cout << "Loowater is doomed!" << endl;


        }
    }
}
