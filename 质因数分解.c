//题目：已知正整数 m 是两个不同的质数的乘积，试求出两者中较大的那个质数。

//my answer:    有缺陷；因为素数可能大于1000个；b[k]会超出；
/*
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int b[1000];
    int k = 0;
    for(int i = 2;i<n;i++)
    {
        int flag = 1;
        for(int j = 2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(1==flag)
        {
            b[k]=i;
            k++;
        }
    }
    for(int i=k;i>=2;i--)
    {
        if(n%b[i]==0)
        {
            printf("%d\n",b[i]);break;
        }
    }
    for(int i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",n/i);break;
        }
    }
    return 0;
}*/

#include <stdio.h>
int main()                         //算法描述：根据唯一分解定理：一个数只能分解成一组素数的乘积；所以只要通过一次循环遍历即可；从2开始
                                     //找到一个因子，用n除以那个因子就可得到另一个大的因子
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",n/i);break;
        }
    }
    return 0;
}