#include<stdio.h>
#include<string.h>

int main()
{
    char msg[100];
    int i,t,j,count,len;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
        count=0;

        scanf("%[^\n]s",msg);

        len = strlen(msg);

        for(i=0;i<len;i++)
        {
            if(msg[i]=='a' || msg[i]=='d' || msg[i]=='g' || msg[i]=='j' || msg[i]=='m' || msg[i]=='p' || msg[i]=='t' || msg[i]=='w' || msg[i]==' ')
                count+=1;
            else if(msg[i]=='b' || msg[i]=='e' || msg[i]=='h' || msg[i]=='k' || msg[i]=='n' || msg[i]=='q' || msg[i]=='u' || msg[i]=='x')
                count+=2;
            else if(msg[i]=='c' || msg[i]=='f' || msg[i]=='i' || msg[i]=='l' || msg[i]=='o' || msg[i]=='r' || msg[i]=='v' || msg[i]=='y')
                count+=3;
            else if(msg[i]=='s' || msg[i]=='z')
                count+=4;
        }
        printf("%d\n",count);
        getchar();
    }
    return 0;
}
