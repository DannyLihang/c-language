/*//1.
#include <stdio.h>
int main()
{
    char arr[1024];
    gets(arr);
    char *a=arr;
    int d = 0;
    int x = 0;
    while(*a)
    {
        if(*a>='a'&&*a<='z')
        {
            x++;
        }
        if(*a>='A'&&*a<='Z')
        {
            d++;
        }
        a++;
    }
    printf("upper=%d,lower=%d\n",d,x);
    return 0;
}
*/

//2.
/*#include <stdio.h>
int main()
{
    char *arr[1024];
    gets(arr);
    char*a=arr;
    char *max=arr;
    while (*a)
    {
        if(*max<*a)
        {
            char t=*max;
            *max=*a;
            *a=t;
        }
        a++;
    }
    printf("%c\n",*max);
    return 0;
    
}
*/


//3.
/*#include <stdio.h>
int main()
{
    char arr1[] ="hello world";
    char arr2[] ="hello d";
    char *p1=arr1;
    char *p2=arr2;
    while (*p1++=*p2++)
    {
        ;
    }
    printf("%s\n",arr1);
    return 0;
    
}*/

//4.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1024];
    gets(arr);
    int t = strlen(arr);
    int i=0,j=0;
    for(i=0;i<t-1;i++)
    {
        for(j=0;j<t-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                char m=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=m;
            }
        }
    }
    printf("%s\n",arr);
    return 0;
}*/

//5.//s[i]
  //s[i]>='A'&&s[i]<='Z'


//进阶1.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1024];
    int  b[26] = {0};
    gets(arr);
    char *a=arr;
    int t=strlen(arr);
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(*(a+i)=='a'+j)           //存数据；
            {
                b[j]++;
                break;
            }
        }
    }
    for(int j= 0;j<26;j++)
    {
        int m=0;
        for(int i = 0;i<26;i++)
        {
            if(b[i]==0)                           //排序；
            continue;
            if(b[m]<b[i])
            {
                m=i;
            }
        }
        if(b[m]==0)
            break;
        else
        printf("%c   %d\n",'a'+m,b[m]);
        b[m]=0;
    }
    return 0;
}*/


//2.
/*#include <stdio.h>
int main()
{
    char arr[3][80];
    int d=0,x=0,s=0,k=0,q=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<80;j++)
        {
            if(arr[i][j]>='A'&&arr[i][j]<='Z') d++;
            else if(arr[i][j]>='a'&&arr[i][j]<='z') x++;
            else if(arr[i][j]>='0'&&arr[i][j]<='9') s++;
            else if(arr[i][j]==' ') k++;
            else q++;
        }
        printf("大写：%d,小写：%d,数字：%d,空格：%d,其它：%d\n",d,x,s,k,q);
    }
    return 0;
}*/

//3.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    gets(arr);
    char*p=",";
    char tem[100]={0};
    strcpy(tem,arr);
    char*ret=NULL;
    for(ret = strtok(tem,p);ret!=NULL;ret=strtok(NULL,p))
    {
        printf("%s\n",ret);
    }
    return 0;
}
*/

//4.
/*#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    scanf("%s",arr);
    int right=strlen(arr)-1;
    int left=0;
    int flag=1;
    while(left<right)
    {
        if(arr[left]!=arr[right])
        {
            flag=0;break;
        }
        left++;
        right--;
    }
    if(1==flag)
    {
        printf("是回文\n");
    }
    else printf("不是回文\n");
    return 0;
}*/
#include <stdio.h>
int main()
{
    char s[1024];
    gets(s);
    int a[26]= {0};
    int i,j;
    int max = 0;
    for(i= 0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            a[s[i]-'a']++;
        }
    }
    for(i=1,max=a[0];i<26;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    for(i=max;i>=1;i--)
    {
        for(j=0;j<26;j++)
        {
            if(a[j]==i)
            {
                printf("%c %d\n",'a'+j,a[j]);
            }
        }
    }
    return 0;
}





































