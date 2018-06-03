#include <stdio.h>
#include<string.h>

int main()
{
    int t,len;

    char n[5];

    scanf("%d",&t);

    while (t--)
    {
        scanf("%s",n);

        len=strlen(n);

        if(len==5)
            printf("3\n");
        else if((n[0]=='o' && n[1]=='n') || (n[0]=='o' && n[2]=='e') || (n[1]=='n' && n[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}
