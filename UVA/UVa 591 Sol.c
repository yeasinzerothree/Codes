#include<stdio.h>


int main()
{
    int n,set=0;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        int a[n];
        int i,avg,sum=0,count=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }

        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
                count+=a[i]-avg;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",++set,count);
        printf("\n");
    }

    return 0;
}
