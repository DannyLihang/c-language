#include <stdio.h>
void menu();
void print();
int ul(int ,int);
int j(int ,int );
int c(int , int );
int di(int ,int );
int cal(int (*p)(int ,int));
int main()
{
    menu();
    int n = 0;
    scanf("%d",&n);
    int a = 0;
    while (n)
    {
        print();
        scanf("%d",&a);
        int ret;
        switch (a)
        {
            case 1:ret =cal(ul);break;
            case 2:ret =cal(j);break;
            case 3:ret=cal(c);break;
            case 4:ret=cal(di);break;
            default: printf("error\n");
        }
        printf("%d\n",ret);
    }
    return 0;
}
void menu()
{
    printf("*******************************\n");
    printf("********1.   开始计算***********\n");
    printf("********0.   退出    ***********\n");
    printf("********************************\n");
}
void print()
{
    printf("1.加\n");
    printf("2.减\n");
    printf("3.乘\n");
    printf("4.除\n");
}
int ul(int x,int y)
{
    return x+y;
}
int j(int x,int y)
{
    return x-y;
}
int c(int x,int y)
{
    return x*y;
}
int di(int x ,int y)
{
    return x/y;
}
int cal(int (*p)(int x,int y))
{
    int x,y;
    printf("请输入两个整数\n");
    scanf("%d %d",&x,&y);
    return (*p)(x,y);
}