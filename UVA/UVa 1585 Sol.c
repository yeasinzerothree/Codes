#include <stdio.h>
#include<string.h>

int main()
{
    int t,i,c,sum,len;

    char a[80];

    scanf("%d",&t);

    while (t--)
    {
        scanf("%s",a);

        len=strlen(a);

        for(i=0,c=0,sum=0;i<len;i++)
        {
            if(a[i]=='O')
                c++;

            else if(a[i]=='X')
                c=0;

            sum=sum+c;
        }

        printf("%d\n",sum);

    }

    return 0;
}
