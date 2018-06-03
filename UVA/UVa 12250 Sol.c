#include <stdio.h>
#include<string.h>

int main()
{
    int c = 0;
    char hlw[20];

    while (scanf("%s",&hlw)!=EOF) {

        if(strcmp(hlw,"#")==0)
            break;
        else{
            if(strcmp(hlw,"HELLO")==0)
                printf("Case %d: ENGLISH\n",++c);
            else if(strcmp(hlw,"HOLA")==0)
                printf("Case %d: SPANISH\n",++c);
            else if(strcmp(hlw,"HALLO")==0)
                printf("Case %d: GERMAN\n",++c);
            else if(strcmp(hlw,"BONJOUR")==0)
                printf("Case %d: FRENCH\n",++c);
            else if(strcmp(hlw,"CIAO")==0)
                printf("Case %d: ITALIAN\n",++c);
            else if(strcmp(hlw,"ZDRAVSTVUJTE")==0)
                printf("Case %d: RUSSIAN\n",++c);
            else
                printf("Case %d: UNKNOWN\n",++c);
        }
    }
    return 0;
}
