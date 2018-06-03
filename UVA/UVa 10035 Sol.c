#include<stdio.h>

int main()
{
    long n1,n2,rem;
    int count,carry;

    while(scanf("%lu%lu",&n1,&n2)==2)
    {
        if(n1==0 && n1==0)
            break;
        count=0;
        rem=0;
        while(n1||n2)
        {
            carry = (n1%10)+(n2%10)+rem;
            if(carry>=10)
            {
                rem=1;
                count++;
            }
            else
                rem=0;
            n1=n1/10;
            n2=n2/10;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n",count);
        else
            printf("%d carry operations.\n",count);
    }
    return 0;
}
