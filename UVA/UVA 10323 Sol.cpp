#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

/*
 * 
 */
long factorial(long n);
int main(int argc, char** argv) {
    long n;
    
    while(cin >> n) {
        if((n < 0 && n % 2 != 0) || factorial(n) == -1)
            cout << "Overflow!" << endl;
        else if((n <= 0 && n % 2 == 0) || factorial(n) == -2)
            cout << "Underflow!" << endl;
        else
            cout << factorial(n) << endl;
    }
}

long factorial(long n) {
    long fact = 1;
    
    
    while(n>1) {
        fact *= n;
        if(fact > 6227020800)
            return -1;
        n--;
    }
    
    if(fact < 10000)
        return -2;
    
    return fact;
}
