#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    string s, t;

    while(cin >> s >> t) {
        int i = 0, count = 0;

        for(int j = 0;  j < s.length(); j++) {
            int flag = 0;
            for(int k = i; k < t.length(); k++) {
                if(s[j] == t[k]) {
                    i = k + 1;
                    count++;
                    flag = 1;
                    break;
                }

            }
            if(flag == 0)
                break;
        }
        if(s.length() == count)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
