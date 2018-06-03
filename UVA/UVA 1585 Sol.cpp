#include <bits/stdc++.h>

using namespace std;

int main() {
    int test_case;

    cin >> test_case;
    getchar();

    for (int i = 0; i < test_case; ++i) {
        string s;

        cin >> s;

        int temp_score = 0;
        int final_score = 0;

        for (int j = 0; j < s.length(); ++j) {
            if(s[j] == 'O') {
                temp_score++;
                final_score += temp_score;
            }
            else {
                temp_score = 0;
            }
        }
        cout << final_score << endl;
    }
}