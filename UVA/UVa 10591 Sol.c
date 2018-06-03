#include<stdio.h>

int main()
{
    long long int i,j,k,dig,sum,n,num,t;
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        num=n;
        for(j=1;j!=0;j++)
        {
            sum=0;
            for(k=1;k!=0;k++)
            {
                dig=num%10;
                sum=sum+dig*dig;
                num=num/10;
                if(num==0)
                {
                    num=sum;
                    break;
                }
            }
            if(num<=9)
                break;
        }
        if(num==1)
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        else
            printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
    }
    return 0;

}
