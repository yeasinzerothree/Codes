#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

/*
 * 
 */
long factorial(long n);
int main(int argc, char** argv) {
    int h1, m1, h2, m2, count = 0;
    
    while (cin >> h1 >> m1 >> h2 >> m2) {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        if(h1 == 0)
            h1 = 24;
        if(h2 == 0)
            h2 = 24;
        
        int t1 = h1 * 100 + m1;
        int t2 = h2 * 100 + m2;
        
        cout << ((t2 < t1) ? (1440 - ((t1 - t2) - (h1 - h2) * 40)) : (((t2 - t1) - (h2 - h1) * 40))) << endl;
    }
    
}