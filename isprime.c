#include <stdio.h>
int main()
{
    int i,j;
    //int isprime=1;
    for(i=2;i<=100;i++)
    {
        int isprime=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        printf("%d ",i);
    }
    return 0;
}