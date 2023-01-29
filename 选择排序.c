/*思路：从0~n-1上找到最小的数放到0位置上，然后再从1~n-1上找到最小的数放到1位置上……以此类推*/

#include <stdio.h>
int main()
{
    int arr[10] = { 1,52,21,14,14,31,13,4,5,35};
    for(int i = 0 ; i < 10 ; i++)
    {
        int minindex = i;
        for(int j = i + 1;j<10;j++)
        {
            minindex = arr[j] < arr[minindex] ? j : minindex;
        }
        /*
        arr[i] = arr[i] ^ arr[minindex];
        arr[minindex] = arr[i] ^ arr[minindex];
        arr[i] = arr[i] ^ arr[minindex];*/     // 因为有些数是相同的位置，所以会出错
        //使用该方法的前提是被交换的数在内存上不能是同一位置
        int t = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = t ; 
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}