/*进阶1：
#include <stdio.h>
int main()
{
    double n = 0.0;
    double average = 0.0;
    double sum = 0.0;
    int i = 0;
    while(scanf("%lf",&n)!=EOF)
    {
        sum+=n;
        i++;
    }
    average=sum/i;
    printf("%lf",average);
    return 0;
}


//2.
#include <stdio.h>
int main()
{
    char arr[1024];
    gets(arr);
    char *p=arr;
    while (*p)
    {
        if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
        {
            printf("%c",*p);
        }
        p++;
    }
    return 0;
}


//3.

#include <stdio.h>
int main()
{
    int n[1024] ;
    double a=0.0;
    double sum = 0.0;
    int i = 0;
    while(n[i]!=-1)
    {
        scanf("%d",&n[i]);
        sum+=n[i];
        i++;
    }
    a=sum/i;
    printf("average = %lf\n",a);
    for(int j = 0;j<i;j++)
    {
        printf("%lf\n",n[j]-a);
    }
    return 0;
}*/

/*
#include <stdio.h>
int main()
{
    int a[] = {1,3,5};
    int x = 7,y = 9;
    int *p = NULL;
    p = a;
    printf("%d,",*p);//1
    printf("%d, ",*(++p));//3
    printf("%d, ",*++p);//5
    printf("%d, ",*(p--));//5
    printf("%d, ",*p--);//3
    printf("%d, ",*p++);//1
    printf("%d, ",++(*p));//4
    printf("%d\n",(*p)++);//4
    p=&a[2];
    printf("%d,",*p);//5
    printf("%d,",*(++p));//随机值
    p++;
    printf("%d, ",*p);//0
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int (*p1)[3];
    p1=a;
    printf("\n");
    printf("1:%d\n",*(*(p1+0)));
    p1++;
    printf("2:%d\n",*p1[0]);
    printf("3:%d\n",*(*(p1+1)+2));
    return 0;
}*/
/*
#include <stdio.h>
void main()
{
    void tran(int n,int x[]);
    int a[4][4]={{3,8,9,10},{2,5,-3,5},{7,8,9,12},{10,11,2,4}};
    tran(2,a[0]);
    tran(0,a[2]);
    tran(0,&a[2][0]);
}
void tran(int n ,int arr[])
{
    int i ;
    for(i=0; i<4;i++)
    {
        printf("%d",arr[n*4+i]);
    }
    printf("\n");
}
#include <stdio.h>
int main()
{
    int i,j,a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int *p=NULL;
    printf("\n%d\t%d\t%d\t%d\n",a[0],a[1],a[2],a[3]);
    for(p=a[0]+2,i=0;i<10;i++)
    {
        printf("%5d",*p++);
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%d",*(a+i));
        for(j=0,p=*(a+i)+j;j<3;j++)
        {
            printf("%5d",*p++);
        }
        printf("\n");
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    char a[]="abcdef";
    char *b="ABCDEF";
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d,%s\n",*a,b+i);
    }
    printf("----------------------\n");
    for(i=3;a[i];i++)
    {
        putchar(*(b+i));
        printf("%c\n",*(a+i));
    }
    return 0;
}*/