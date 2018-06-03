#include<stdio.h>
#include<math.h>


int main()
{
    int t,i,rem;
    long n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%ld",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;

        for(i=0;i<2;i++)
        {
            rem = n%10;
            n=n/10;
        }
        printf("%d\n",abs(rem));
    }
    return 0;
}
