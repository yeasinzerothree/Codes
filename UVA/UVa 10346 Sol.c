#include<stdio.h>

int main()
{
    int x,y,z;

    while (scanf("%d%d",&x,&z)!=EOF)
    {
        y = x;

        while (y>=z)
        {
            x = x + y/z;

            y = (y/z) + (y%z);

        }

        printf("%d\n",x);

    }

    return 0;
}
