#include<stdio.h>

int main()
{
    int t,s,i,h,l,c=1;


    scanf("%d",&t);

    while (t--)
    {

        scanf("%d",&s);

        int a[s];

        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=1,h=0,l=0;i<s;i++)
        {
            if(a[i]>a[i-1])
                h++;
            else if(a[i]<a[i-1])
                l++;
        }

        printf("Case %d: %d %d\n",c++,h,l);

    }


    return 0;
}
