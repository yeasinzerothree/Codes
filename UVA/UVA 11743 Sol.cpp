#include <cstdio>
#include <iostream>

using namespace std;

int digitSum(int n);
int main() {
    int t;

    cin >> t;
    getchar();
    while (t--) {
        string s;
        getline(cin, s);
        int sum = 0;

        for (int  i = 0, count = 0; i < s.size(); ++i) {
            if (isdigit(s[i])) {
                sum += (count % 2 == 0) ? digitSum(2 * (s[i] - '0')) : s[i] - '0';
                count++;
            }
        }
        string s2 = to_string(sum);
        cout << ((s2[s2.size() - 1] == '0') ? "Valid" : "Invalid") << endl;
    }
}
int digitSum(int n) {
    int sum = 0;

    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

