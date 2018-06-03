#include <stdio.h>

int main()
{
    long long pf , pm , tm  , tf ,  g , i;

    while (scanf("%lld",&g)) {
        if(g==0)
            break;
        pf = 0;
        pm = 1;

        for(i = 1; i <= g; i++) {
            tf = pf + pm;
            tm = pf ;

            pf = tf;
            pm = tm;
        }
        printf("%lld\n",tm + tf);
    }

    return 0;
}
