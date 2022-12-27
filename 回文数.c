//结构：菜单；进制转换器，独立的判断回文数的函数；
#include <stdio.h>
#include <string.h>
char u[1000],c[1000],r[1000],str2[1000];
void menu(void);
int judge(char *);
char * binary(int );
char * octal(int );
char * decimal(int );
char * hexadecimal(int );
int main()
{
    int input = 0;
    do{
        menu();
        scanf("%d",&input);
        if(input==1)
        {
        int m = 0;
        scanf("%d",&m);
        char *b = binary(m);
        if(judge(b)) printf("二进制-->%s\n",b);
        char* o= octal(m);
        if(judge(o)) printf("八进制-->%s\n",o);
        char *d= decimal(m);
        if(judge(d)) printf("十进制-->%s\n",d);
        char *h= hexadecimal(m);
        if(judge(h)) printf("十六进制-->%s\n",h);
        }
    }while(input);
    return 0;
}
void menu(void)
{
    printf("*******************************************************\n");
    printf("**************        0.exit          *****************\n");
    printf("*******************************************************\n");
    printf("*******************************************************\n");
    printf("**************        1.start         *****************\n");
    printf("*******************************************************\n");
}
int judge(char *p)
{
    int right = strlen(p) - 1;
    int left = 0;
    while(left<right)
    {
        if(*(p+left)!=*(p+right)) return 0;
        left++;
        right--;
    }
    return 1;
}
char * binary(int m)
{
    static char  t[]="01";
    static int lenn = 0;
    static char p[1000],*f=p,*g;
    g = u;
    while (m)
    {
        *f++=t[m%2];
        lenn++;
        m/=2;
    }
    f--;
    while (lenn)
    {
        *g++ = *f--;
        lenn--;
    }
    
    return u;
}
char * octal(int m)
{
    static char ww[]="01234567";
    static int e = 0;
    static char z[1000],*ss = z,*dd ;
    dd = c;
    while(m)
    {
        *ss++ = ww[m%8];
        e++;
        m/=8;
    }
    ss--;
    while (e)
    {
        *dd++=*ss--;
        e--;
    }
    
    return c;
}
char * decimal(int m)
{
    static char qq[]="0123456789";
    static int len = 0;
    static char s[1000],*a = s,*b;
    b=r;
    while (m)
    {
        *a++ = qq[m%10];
        len++;
        m/=10;
    }
    a--;
    while (len)
    {
        *b++ = *a--;
        len--;
    }
    
    return r;
}
char* hexadecimal(int m)
{
	static char hexchars[] = "0123456789ABCDEF";   //十六进制对应的数组
	static char str1[1000], * p = str1, * q ;
	static int n = 0;                   //计算字符长度，为倒排做准备
	//str1  存储取余数组，  str2倒排存储数组
    q = str2;
	while (m)   //取余                   
	{
		*p++ = hexchars[m % 16];
		m /= 16;
		n++;
	}

	p--;                  //指针回退，因为多加了一步

	while (n)
	{
		*q++ = *p--;
		n--;
	}
	return str2;
}