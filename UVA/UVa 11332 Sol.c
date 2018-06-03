#include <stdio.h>

int main()
{
    long n;
    int sum;

    while (scanf("%ld",&n))
    {
        if(n==0)
            break;
        while (n>9)
        {
            sum=0;
            while (n!=0)
            {
                sum = sum + n%10;

                n=n/10;

            }
            n=sum;


        }

        printf("%ld\n",n);

    }
    return 0;
}
