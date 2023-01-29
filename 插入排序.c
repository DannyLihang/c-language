//插入排序是O(n^2)的最好的排序方法
#include <stdio.h>
int main()
{
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    //0-1上有序
    //0-2
    //0-3
    //……
    //0-n-1
    for(int right = 1; right < 10 ;right++)    //right 为最右边数的下标，依次让0~1,0~2……有序
    {
        for(int j = right-1; j >= 0&&arr[j]>arr[j+1];j-- ) //j 为新数的前一个位置，让前面的数均有序
        {
            int t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
        }
    }
    for(int i = 0 ; i < 10 ;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0; 
}