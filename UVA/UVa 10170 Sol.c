#include <stdio.h>

int main()
{
    long s,d,a,i;

    while (scanf("%ld%ld",&s,&d)==2)
    {

        for(a=0,i=s;a<d;i++)
        {
            a=a+i;
        }

        printf("%ld\n",i-1);

    }

    return 0;

}
