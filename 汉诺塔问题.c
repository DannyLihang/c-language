#include <stdio.h>
void hanota(int n,char t1,char t2,char t3);
void print(char ,char);
int main()
{
    int n = 0 ;
    scanf("%d",&n);
    hanota(n,'A','B','C');
    return 0;
}
void hanota(int n,char t1,char t2,char t3)
{
    if(n==1) print(t1,t3);
    else
    {
        hanota(n-1,t1,t3,t2);//把n-1个借助C移到B
        print(t1,t3);//把剩下的一个移到C
        hanota(n-1,t2,t1,t3);//把n-1个从B借助A移到C
    }
}
void print(char p1,char p2)
{
    printf("%c-->%c",p1,p2);
    printf("\n");
}