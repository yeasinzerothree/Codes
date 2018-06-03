#include<stdio.h>
#include<string.h>
     
int main()
{
    int sum1,sum2,n1,n2,i,temp;
    
    char s1[30],s2[30];
     
    while(gets(s1))
    {    
        gets(s2);
        
        sum1=sum2=0;
               
        for(i=0;i<strlen(s1);i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
               sum1 += s1[i] - 64; 
            else if(s1[i]>='a' && s1[i]<='z')
              sum1 += s1[i] - 96;
        }
        for(i=0;i<strlen(s2);i++)
        {
            if(s2[i]>='A' && s2[i]<='Z')
               sum2 += s2[i] - 64; 
            else if(s2[i]>='a' && s2[i]<='z')
              sum2 += s2[i] - 96;
        }
        n1 = sum1;
        while(sum1>9)
        {
            sum1 = 0;
            while(n1!=0)
            {
               sum1 += n1%10;
               n1 = n1/10;
            }
            n1=sum1;
        }
        n2 = sum2;
        while(sum2>9)
        {
            sum2 = 0;
            while(n2!=0)
            {
               sum2 += n2%10;
               n2 = n2/10;
            }
            n2=sum2;
        }
        if(sum1==sum2)
            printf("100.00 %%\n");
        else
        {
            if(sum1>sum2)
            {
                temp = sum1;
                sum1 = sum2;
                sum2 = temp;
            }
            printf("%.2f %%\n",(float)sum1/sum2*100);
        }
            
     
    }
        return 0;
            
 }