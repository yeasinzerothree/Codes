#include <stdio.h>

int main() {
    long t , f , a , b ,c ,sum ;


    while (scanf("%ld",&t)!=EOF) {

        while (t--) {
            scanf("%ld",&f);
            sum = 0;
            while (f--) {
                scanf("%ld%ld%ld",&a,&b,&c);

                sum = sum + a*c;
            }
            printf("%ld\n",sum);
        }
    }
    return 0;
}
