#include <stdio.h>
#include<math.h>

int main()
{
    int t,d,r;
    long m,n,o,sum;

    scanf("%d",&t);

    while (t--)
    {
        scanf("%ld",&n);
        m=n;
        d=0;

        while (m!=0)
        {
            m=m/10;

            d++;
        }
        o=n;
        sum=0;
        while (o!=0)
        {
            r=o % 10;

            sum = sum + pow(r,d);

            o=o/10;
        }

        if(sum==n)
            printf("Armstrong\n");
        else if(sum!=n)
            printf("Not Armstrong\n");

    }
    
    return 0;
}
