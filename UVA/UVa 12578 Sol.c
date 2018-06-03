#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()
{
    int t,i,l;
    double w,r,g_a,r_a,t_a;

    scanf("%d",&t);

    for(i=0 ; i<t ; i++)
    {
        scanf("%d", &l);
        r = l/5.0;
        w = (3/5.0)*l;
        t_a=l*w;

        r_a = PI * r * r;
        g_a = t_a -  r_a;

        printf("%.2lf %.2lf\n",r_a,g_a);
    }

    return 0;
}
