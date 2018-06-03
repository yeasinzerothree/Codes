#include <bits/stdc++.h>

using namespace std;

int main() {
    string year;
    int t = 0;

    while (cin >> year) {
        if(t != 0) {
            cout << endl ;
        }

        int flag = 0, isleap = 0;
        int last_four_digit = stoi(year.substr(year.size() - 4));
        int last_two_digits = stoi(year.substr(year.size() - 2));

        if (last_two_digits % 4 == 0) {
            if (last_two_digits == 0) {
                if (last_four_digit % 400 == 0) {
                    cout << "This is leap year." << endl;
                    flag = 1;
                    isleap = 1;
                }
            } else {
                cout << "This is leap year." << endl;
                flag = 1;
                isleap = 1;
            }
        }
        int sum = 0;
        for (int i = 0; i < year.size(); ++i) {
            sum += year[i] - '0';
        }

        if (sum % 3 == 0 && last_two_digits % 5 == 0) {
            cout << "This is huluculu festival year." << endl;
            flag = 1;
        }


        int sum1 = 0;

        for (int i = 0; i < year.size(); ++i) {
            if (i % 2 == 0)
                sum1 += year[i] - '0';
            else
                sum1 -= year[i] - '0';
        }

        if (sum1 % 11 == 0 && last_two_digits % 5 == 0 && isleap) {
            cout << "This is bulukulu festival year." << endl;
            flag = 1;
        }

        if (flag == 0)
            cout << "This is an ordinary year." << endl;
        t = 1;
    }
}
