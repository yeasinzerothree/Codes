#include<stdio.h>
#include<string.h>
    
int main()
{
    char s[100];
    int i,len;
    
    while (gets(s)) 
    {
        len = strlen(s);
        
        for(i=0;i<len;i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    
    return 0;    
}