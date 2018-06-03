#include<stdio.h>

int main()
{

    int t,i,j=1;
    long int a,b,c;

   scanf("%d",&t);

   for(i=0;i<t;i++,j++)
   {
       scanf("%ld%ld%ld",&a,&b,&c);

      if(((a+b)>c && (b+c)>a && (c+a)>b)==0)
          printf("Case %d: Invalid\n",j);
      else
      {
          if(a==b && b==c)
              printf("Case %d: Equilateral\n",j);
          else if(a==b || a==c || b==c)
              printf("Case %d: Isosceles\n",j);
          else if(a!=b && b!=c && c!=a)
              printf("Case %d: Scalene\n",j);
      }


   }

   return 0;
}
