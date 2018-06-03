#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
    int c, i = 0;

    cin >> c;

    while(c--) {
        int radius, length, width, u_l_x, u_l_y, l_l_x, l_l_y, u_r_x, u_r_y, l_r_x, l_r_y;

        cin >> radius;

        length = radius * 5;

        width = radius * 3;

        u_r_y = u_l_y = width / 2;
        l_r_y = l_l_y = -1 * u_r_y;

        u_l_x = l_l_x = -1 * length * .45;

        u_r_x = l_r_x = length * .55;

        cout << "Case " << ++i << ":" << endl;
        cout << u_l_x << " " << u_l_y << endl;
        cout << u_r_x << " " << u_r_y << endl;
        cout << l_r_x << " " << l_r_y << endl;
        cout << l_l_x << " " << l_l_y << endl;
    }
}
