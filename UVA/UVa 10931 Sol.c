#include<stdio.h>


int main()
{
    int a[50];
    int b;
    int i,j,k,sum;

    while(scanf("%d",&b)==1)
    {
        if(b==0)
            break;
        i=0;
        sum=0;

        while(b>0)
        {
            a[i]=b%2;
            b=b/2;
            i++;
        }
        for(k=0;k<i;k++)
            sum+=a[k];
        printf("The parity of ");

        for(j=i-1;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        printf(" is %d (mod 2).\n",sum);
    }

    return 0;

}
