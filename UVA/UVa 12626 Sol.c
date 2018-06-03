#include <stdio.h>
#include <string.h>

int main()

{
    int i, t, A[6], min;
    
    char s[601];
    
    scanf("%d",&t);
    while(t--) {
    
    scanf("%s",s);
    
    for(i=0; i<6; i++)
        A[i]=0;
    
    for(i=0; i<strlen(s); i++) {
        if(s[i] == 'M')
            A[0]++;
        else if(s[i] == 'A')
            A[1]++;
        else if(s[i] == 'R')
            A[2]++;
        else if(s[i] == 'G')
            A[3]++;
        else if(s[i] == 'I')
            A[4]++;
        else if(s[i] == 'T')
            A[5]++;
    }
    
    A[1]=A[1]/3;
    A[2]=A[2]/2;
    
    min = A[0];
    
    for(i=1; i<6; i++) {
        if(A[i]<min)
            min = A[i];
    }
    printf("%d\n",min);
    }
    return 0;
    
}
