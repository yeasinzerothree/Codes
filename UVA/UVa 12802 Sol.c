#include <stdio.h>

int check_palindrome(long n);

int main()
{
    long x,y,i,flag;
    int p_flag;

    while(scanf("%ld",&x)==1)
    {
        flag=0;
        p_flag=0;

        y=x*2;

        printf("%ld\n",y);

        for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
                p_flag=1;
                break;
            }

        }
        if(p_flag==0 || x==1)
            flag=check_palindrome(x);
        if(flag==1)
            break;

    }
return 0;
}

int check_palindrome(long n)
{
    int f=0,rem;
    long reversed_number=0,original_number;

    original_number = n;

    while(n>0)
    {
        if(n==0)
            break;
        rem=n%10;
        reversed_number = reversed_number*10 + rem;
        n = n/10;
    }
    if(reversed_number==original_number)
        f=1;
    return f;
}
