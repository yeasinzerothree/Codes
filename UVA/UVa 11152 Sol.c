#include <stdio.h>
#include<math.h>

#define PI acos(-1)
int main()
{
    long a , b , c;
    double r_r , r_y , a_r , a_v , a_y ;

    while(scanf("%ld%ld%ld",&a, &b ,&c )==3) {

    r_r = (double)a*b/(a+b+c);
    a_r = (PI*r_r*r_r);

    a_v = (0.5 * a * b) - a_r;

    r_y = (double)c/2;
    a_y = (PI * r_y * r_y) - (.5 * a * b);

    printf("%.4lf %.4lf %.4lf\n",a_y , a_v , a_r);
}
return 0;
}
