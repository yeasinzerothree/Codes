#include <cmath>
#include <iostream>

using namespace std;

int digitSum(int n);
int main() {
    int t, c = 0;

    cin >> t;

    while (t--) {
        int n, c30 = 0, c60 = 0;

        cin >> n;

        while (n--) {
            double time;
            cin >> time;

            c30 += ceil((time + 1)/ 30) * 10;
            c60 += ceil((time + 1)/ 60) * 15;
        }
        string s;
        if(c30 < c60)
            s = "Mile " + to_string(c30);
        else if(c60 < c30)
            s = "Juice " + to_string(c60);
        else
            s = "Mile Juice " + to_string(c30);

        cout << "Case " << ++c << ": " << s << endl;
    }
}

