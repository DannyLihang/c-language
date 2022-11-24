#include <stdio.h>
int main()
{
    int i,j;
    int a;
    for(i=1;i<=10;i++)
    {
        int m=1;
        for(j=i;j>=1;j--)
        {
            m*=j;

        }
        printf("%d ",m);
    }
    return 0;
}    