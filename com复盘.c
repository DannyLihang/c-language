//验证哥德巴赫猜想

/*
#include <stdio.h>
int isprime(int i);
int main()
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 3;i<n;i++)
    {
        if(isprime(i)&&isprime(n-i))
        {
            printf("%d = %d + %d",n,i,n-i);
            break;
        }
    }
    return 0;
}
int isprime(int i )
{
    for(int j = 2;j*j<=i;j++)
    {
        if(0==i%j) return 0;
    }
    return 1;
}*/


#include <stdio.h>
int isprime(int i);
int main()
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 3;i<n;i++)
    {
        if(isprime(i)&&isprime(n-i))
        {
            printf("%d = %d + %d",n,i,n-i);
            break;
        }
    }
    return 0;
}
int isprime(int i )
{
    for(int j = 2;j*j<=i;j++)
    {
        if(0==i%j) return 0;
    }
    return 1;
}