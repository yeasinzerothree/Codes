#include <stdio.h>

int main()
{
    int a,b,c,sum;

    while (scanf("%d%d%d",&a,&b,&c)==3)
    {
        sum=a+b+c;

        if(sum==0 || sum==3)
            printf("*\n");
        else if(sum==1)
        {
            if(a==1)
                printf("A\n");
            else if(b==1)
                printf("B\n");
            else
                printf("C\n");
        }
        else if(sum==2)
        {
            if(a==0)
                printf("A\n");
            else if(b==0)
                printf("B\n");
            else
                printf("C\n");
        }

    }

    return 0;

}
