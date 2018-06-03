#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
    int m, h;

    while(scanf("%d:%d", &h, &m)) {
        if(h + m == 0)
            break;

        double degree = abs(((h * 30) + (.5 * m)) - (m * 6));

        if(degree > 180)
            degree = 360 - degree;

        cout << fixed << setprecision(3);

        cout << degree << endl;
    }
}
