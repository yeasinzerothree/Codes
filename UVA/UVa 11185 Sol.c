#include<stdio.h>
#include<string.h>
    
int main()
{
    long   n;
    int i,j;
    int num[100];
    
    while(scanf("%ld",&n))
    {
        if(n<0)
            break;
        i=0;
        while(n!=0)
        {
            num[i] = n%3;
            n = n/3;
            i++;
        }
        if(i==0)
            printf("0");
       
        for(j=i-1;j>=0;j--)
        {
            printf("%d",num[j]);
        }
        printf("\n");
    }
    return 0;
    
}