#include <iostream>
#include <algorithm>
/*
void Merge(int arr[],const int left,const int mid,const int right)
{
    const int subarrayone = mid - left +1; //length of array
    const int subarraytwo = right - mid;

    int *leftArray = new int[subarrayone];      //分别保存左右两个数组
    int *rightArray = new int[subarraytwo];         //用于临时存放

    for(int i=0;i<subarrayone;i++)
    {
        leftArray[i] = arr[i];
    }
    for(int i=0;i<subarraytwo;i++)
    {
        rightArray[i] = arr[mid+i+1];
    }

    int indexofsubarrayone = 0;
    int indexofsubarraytwo = 0;
    int indexofMegerarray = left;

    while(indexofsubarrayone < subarrayone && indexofsubarraytwo < subarraytwo)
        {
            if(leftArray[indexofsubarrayone] <= rightArray[indexofsubarraytwo])
            {
                arr[indexofMegerarray] = leftArray[indexofsubarrayone];
                indexofsubarrayone++;
            }
            else {
                arr[indexofMegerarray] = rightArray[indexofsubarraytwo];
                indexofsubarraytwo++;
            }
            indexofMegerarray++;
        }

        while(indexofsubarrayone < subarrayone)
        {
            arr[indexofMegerarray] = leftArray[indexofsubarrayone];
            indexofMegerarray++;
            indexofsubarrayone++;
        }
        while(indexofsubarraytwo < subarraytwo)
        {
            arr[indexofMegerarray] = rightArray[indexofsubarraytwo];
            indexofMegerarray++;
            indexofsubarraytwo++;
        }

        delete[] leftArray;
        delete[] rightArray;
}*/
void Merge(int arr[], const int left , const int mid ,const int right)
{
    int p1 = left;
    int p2 = mid+1;
    int i = 0;
    int *help = new int[right - left +1];
    while (p1 <= mid && p2 <= right)
    {
        help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
    }
    while (p1<= mid)
    {
        help[i++] = arr[p1++];
    }
    while (p2<=right)
    {
        help[i++] = arr[p2++];
    }
    for(int j = 0 ; j < i; j++)
    {
        arr[left+j] = help[j];
    }
    
}
void Mergesort(int arr[],const int left,const int right) //divide form left to mid and from mid+1 to right
{
    if(left<right)
    {
        int mid = (right - left) / 2 + left;
        Mergesort(arr,left,mid);
        Mergesort(arr,mid + 1,right);
        Merge(arr,left,mid,right);
    }
}
int main()
{
    int arr[10] = {10,9,8,7,6,5,3,2,2,1};
    /*for(int i=0;i<10;i++)
    {
        std::cin>>arr[i];
    }*/
    Mergesort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;
}