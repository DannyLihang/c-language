/*#include <stdio.h>
int main() {
    int n = 0;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = 1;i<=2;i++)
        {                                            my answer
            for(int j = 1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(int i = 1;i<=n-3;i++)
        {
            printf("*");
            for(int j = 1;j<=2*i+1;j++)
            {
                printf(" ");
            }
            printf("* \n");
        }
        for(int i  = 1;i<=n;i++)
        {
            printf("* ");
        }
        //printf("\n");
    }
    return 0;
}*/


  //           need to learn
/*
#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j = 1;j<2*i+1;j++)
            {
                if(i==n)
                {
                    if(j&1==1)
                    printf("*");
                else
                    printf(" ");
                    continue;
                }
                if(j==1||j==2*i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}*/

/*          normal way
#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i < n - 1)
                {
                    if (j == i || j == 0)
                        printf("* ");
                    else
                        printf("  ");
                }
                else if (i == n - 1)
                    printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}*/
