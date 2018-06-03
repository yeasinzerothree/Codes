#include<stdio.h>

int main()
{
    int n,i,total;

    while(scanf("%d",&n)==1 && n!=0)
    {
        for(i=n,total=0;i>=1;i--)
        {
            total = total + (i*i);
        }

        printf("%d\n",total);
    }
    return 0;
}
