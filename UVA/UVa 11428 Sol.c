#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n, j , flag;

    while(scanf("%d",&n)&&n)
    {
        flag=0;
        for(i=1;i<100;i++)
        {
            if(flag==1)
                break;
            for(j=0;j<=i;j++)
            {
                if(i*i*i-j*j*j==n)
                {
                    printf("%d %d\n",i,j);
                    flag=1;
                    break;
                }
            }
        }
        if(i==100)
            printf("No Solution\n");
    }

return 0;
}
