/*函数一：判断是否冲突
函数二：寻找满足要求的皇后位置
函数三：打印满足条件的皇后
可以运用全局变量，避免函数参数太多的麻烦
定义三个数组，使其成为flag的作用，在未出现冲突时为1，一旦皇后占领了该列，即为0，可以通过函数递归来找到
八个皇后的位置，之后就可以用回溯算法，将标记为可占领状态
满足情况后进行回溯，让flag成为可占领状态，继续寻找下一个可行的皇后位置；
需定义一个数组代表皇后占领的位置，因为（n,c)为皇后的坐标，所以就以c为其下标作为标志
*/
#include <stdio.h>
int count = 0;//使其成为种数的标志
int h[8] = {1,1,1,1,1,1,1,1};//列flag
int qu[8] = {0};//皇后状态
int x1[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};//斜线flag
int x2[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};//斜线flag
void print();//打印满足题意的situation
void search(int n);//查找皇后
int judge(int c,int n);//判断皇后
int main()
{
    int n = 0 ; 
    search(n);
    return 0;
}
int judge(int c ,int n)
{
    if(h[c]&&x1[n-c+7]&&x2[n+c])
    return 1;
    else return 0;
}
void search(int n )
{
    int c = 0;
    for(c = 0;c<8;c++)
    {
        if(judge(c,n))
        {
            qu[n] = c;
            h[c] = 0;  //将标志为否
            x1[n-c+7] = 0;
            x2[n+c] = 0;
            if(n < 7) search(n+1);// search下一个皇后；
            else 
            {
                print();  
            }                    //直接打印结果；
            //回溯：
            h[c] = 1 ; // 将标志为是，即可开始search 下一个皇后
            x1[n-c+7] = 1;
            x2[n+c] = 1;
        }
    }
}
void print()
{
    int c, i, j ;
    //int count = 0;
    count++;
    printf("第%d种:\n",count);
    //count++;
    int arr[8][8] = {0};
    for(c = 0;c < 8 ; c++)
    {
        arr[c][qu[c]] = 1;
    }
    for(i = 0 ; i< 8 ;i++)
    {
        for( j = 0 ; j < 8 ; j++)
        {
            printf("%d ",arr[j][i]);//打印棋盘，以1代表皇后；
        }
        printf("\n");
    }
}