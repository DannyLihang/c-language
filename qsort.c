#include <stdio.h>
#include <stdlib.h>
void my_qsort(void *arr,int num,int size , void(*p)(const void *e1,const void *e2));
void swap(char *e1 , char *e2,int size);
int com(const void *p1,const void *p2);
int main()
{
    int arr[]={9,3,2,45,520,324,423,62,233};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int k = sizeof(arr[0]);
    my_qsort(arr,sz,k,com);
    for(int i = 0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//实现qsort 函数；
//利用冒泡排序算法描述
void my_qsort(void *arr,int num,int size , void(*p)(const void *e1,const void *e2))
{
    for(int i = 0;i<num-1;i++)//趟数
    {
        for(int j = 0;j<num - 1 -i;j++)
        {
            if(com(arr+j*size,arr+(j+1)*size)<0)//com函数需要用户自己写；
            {
                //交换
                swap(arr+j*size,arr+(j+1)*size,size);
            }
        }
    }
}
void swap(char *e1 , char *e2,int size) //注意：因为不知道具体比较什么，所以只有每一个字节的交换，所以定义char*，用循环来帮助交换；
{
    for(int i = 0;i<size;i++)
    {
        char t ;
        t = *e1;
        *e1 = *e2;
        *e2=t;
        e1++;//注意：一定不要忘记指针的移动
        e2++;
    }
}
int com(const void *p1,const void *p2)
{
    return *(int *)p1-*(int *)p2;
}