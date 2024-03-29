//输入圣诞树的高度h，1<= h <= 1001<=h<=100

/*例如：3
        *  
       * * 
      * * *
     *     *  
    * *   * * 
   * * * * * *
  *     *     *  
 * *   * *   * * 
* * * * * * * * *
        *
        *
        *
2
     *     
    * *    
   * * *   
  *     *  
 * *   * * 
* * * * * *
     *
     *
*/
#include <stdio.h>
int main() 
{
    int n=0;
    scanf("%d",&n);               //读取数据
    for(int i = 1;i<=3*n;i++)      //设置循环次数；先打印上面三角形的图形，可知是3的n倍
    {
        for(int j = 1;j<=3*n-1-i+1;j++)    //先打印空格数，观察可知其规律，与行数有关
        {
            printf(" ");
        }
        for(int k = 1;k<=i;k++)         //打印中间的符号；可以将* （*和空格）看成一个整体
        {
            if((i%3==1&&i!=1&&k!=1&&k!=i&&k%3!=1)||(i%3==2&&k%3==0))  //中间空格的地方有规律：是3n+1和3n+2行；并且去掉每行的首尾，和每行中3k+1的地方都应是（* ）
            {
                printf("  ");
            }
            else 
            printf("* ");                     //不符合空格的要求，其余的都打印（* ）；
        }
        printf("\n");                         //控制换行
    }
    for(int i = 1;i<=n;i++)              //目的在于打印最下部分；可以看成空格和*组成；
    {
        for(int j = 1;j<=3*n-1;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}