#include <stdio.h>

int main()
{
    int a,b,c,d,e;

    while (scanf("%d%d%d",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)
            break;
        d=(a*a) + (b*b);
        e=c*c;

        if(d==e)
            printf("right\n");
        else if(d!=e)
            printf("wrong\n");

    }

    return 0;
}
