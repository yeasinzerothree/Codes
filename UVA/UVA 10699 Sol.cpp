#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    bool primes[1000001];

    memset(primes, true, sizeof(primes));

    for (int i = 2; i * i <= 1000000; ++i) {
        if (primes[i] == true) {
            for (int j = i * 2; j <= 1000000; j += i) {
                primes[j] = false;
            }
        }
    }

    int number;

    while ((cin >> number) && number !=0) {
        int count = 0;

        for (int i = 2; i <= number ; ++i) {
            if (primes[i]) {
                if(number % i == 0)
                    count++;
            }
        }
        cout << number << " : " <<  count << endl;
    }
}

