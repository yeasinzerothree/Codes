#include <stdio.h>

int main()
{
    long int sum,dif,a,b,t;

    scanf("%ld",&t);

    while(t--)
    {
        scanf("%ld%ld",&sum,&dif);

        if(dif>sum || (sum-dif)%2!=0)
            printf("impossible\n");
        else
        {
            b= (sum - dif)/2;
            a= b+dif ;

            printf("%ld %ld\n",a,b);
        }
    }

    return 0;
}
