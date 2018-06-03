#include<stdio.h>

int main()
{
   int t,i,a,b,temp,j,sum,k=1;

   scanf("%d",&t);

   for(i=0;i<t;i++,k++)
   {
       sum=0;
       scanf("%d%d",&a,&b);

       if(a>b)
       {
           temp=a;
           a=b;
           b=temp;
       }

       for(j=a;j<=b;j++)
       {
           if(j%2!=0)
               sum=sum+j;
       }

       printf("Case %d: %d\n",k,sum);
   }

   return 0;
}
