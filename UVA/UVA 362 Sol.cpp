#include <bits/stdc++.h>

using namespace std;

int main() {
    int total_data, t= 0;

    while (cin >> total_data) {
        if(total_data == 0)
            break;
        if(t != 0)
            cout << endl;
        int n, temp_data = 0, time = 0, total_time = 0, tmp = 0;
        cout<< "Output for data set " << ++t << ", " << total_data <<" bytes:" << endl;

        while(cin >> n) {
            temp_data += n;
            tmp += n;
            time++;
            total_time++;
            if(time == 5) {
                int avg = ceil((total_data - temp_data)/ (double)(tmp / (double)time));
                if(tmp == 0)
                    cout << "   Time remaining: stalled" << endl;
                else
                cout << "   Time remaining: " << avg << " seconds" << endl;
                tmp = 0;
                time = 0;
            }
            if(temp_data == total_data)
                break;
        }
        cout << "Total time: " << total_time << " seconds" << endl;
    }
}