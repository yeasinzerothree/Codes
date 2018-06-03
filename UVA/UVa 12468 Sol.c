#include<stdio.h>

int main()
{
    int c1,c2,m_c,temp;

    while(scanf("%d%d",&c1,&c2))
    {
        if(c1==-1 && c2==-1)
            break;
        else
        {
            if(c1<c2)
            {
                temp=c1;
                c1=c2;
                c2=temp;
            }
            m_c=c1-c2;
            if(m_c<=50)
                printf("%d\n",m_c);
            else if(m_c>50)
                printf("%d\n",(c2+100)-c1);
        }
    }

    return 0;

}
