#include<stdio.h>
#include<math.h>


int main()
{
    int n,i,j,l;
    long k,sum;

    while(scanf("%d",&n)==1)
    {
        sum=0;
        for(i=3,k=1;i<=n;i=i+2)
        {
            for(j=0;j<i;j++)
        {
            k=k+2;
        }
        }
        for(l=0;l<3;l++)
        {
            sum+=k;
            k-=2;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
