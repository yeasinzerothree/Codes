#include <bits/stdc++.h>

using namespace std;

int main() {
    int test_case;

    cin >> test_case;

    while (test_case--) {
        int number_of_days;

        cin >> number_of_days;

        int days[number_of_days + 1] = {0};

        int number_of_political_party;
        cin >> number_of_political_party;

        for (int j = 0; j < number_of_political_party; ++j) {
            int x;
            cin >> x;

            for (int i = 1; i <= number_of_days; ++i) {
                if((i % 7 == 6 || i % 7 == 0)== 0 && i % x == 0)
                    days[i] = 1;
            }
        }
        int count = 0;

        for (int k = 1; k <= number_of_days; ++k) {
            if(days[k] == 1)
                count++;
        }
        cout << count << endl;
    }
}