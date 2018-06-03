#include<stdio.h>
#include<string.h>

int main()
{
    int i , t , m , total=0;
    char s[5];

    scanf("%d",&t);

    for(i=0 ; i<t; i++)
    {
        scanf("%s", s);

        if(strcmp(s,"donate")==0)
        {
            scanf("%d",&m);
            total+=m;
        }
        else if(strcmp(s,"report")==0)
        {
            printf("%d\n",total);
        }
    }

    return 0;
}
