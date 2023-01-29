/*首先建立一个menu:包括有 添加，删除 ， 修改 ， 查询 ， 存盘 ,退出 这几个功能*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <windows.h>
#define max 1000 //假设车库最大容量为1000
typedef struct carinfo
{
    char attribute[10];//停车性质
    char carid[20];//车牌号
    char num[5];//车位号
    char region[5];//车位编号
    char ftime[20];//开始时间
    char htime[20];//结束时间
}carinfo;
typedef struct park
{
    carinfo data[max];//存放车库信息
    int sz;//车库车辆有效个数
}park;
void Initcontact(park *);//初始化车库信息
void menu();
static int Findname(park* pc , char carid[]);//通过车牌号查找车辆信息
void addcar(park* );//添加车辆
void deletecar(park* );//删除车辆
void modifycar(park* );//修改车辆信息
void searchcar(park *);//查询车辆信息
void savecar(park* );//存盘车辆信息
enum Option
{
    EXIT,
    ADD,
    DEL,
    MODIFY,
    SEARCH,
    SAVE
};
int main()
{  
    char key[10];
    int i = 0;
    for( i = 0 ; i < 5; i++)
    {
        printf("请输入管理员密码：>");
        system("color A");
        scanf("%s",key);
        if(strcmp("123456",key)==0) break;
        else printf("\n密码错误，请重新登录\n");
    }
    if(i<5)
    {
    int input = 0;
    park parking;//创建车库信息表
    Initcontact(&parking);//初始化车库信息表
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
            case EXIT:printf("退出成功\n");break;
            case ADD:addcar(&parking);break;
            case DEL:deletecar(&parking);break;
            case MODIFY:modifycar(&parking);break;
            case SEARCH:searchcar(&parking);break;
            case SAVE:savecar(&parking);break;
            default:printf("选择无效，请重新选择\n");break;
        }
    }while(input);
    }
    else 
    {
        printf("登录密码错误超过5次，退出程序\n");
    }
    return 0;
}
void menu()
{
    printf("****************************************************\n");
    printf("****************************************************\n");
    printf("*********            0.退出                 ********\n");
    printf("****************************************************\n");
    printf("*********            1.添加                 ********\n");
    printf("****************************************************\n");
    printf("*********            2.删除                 ********\n");
    printf("****************************************************\n");
    printf("*********            3.修改                 ********\n");
    printf("****************************************************\n");
    printf("*********            4.查询                 ********\n");
    printf("****************************************************\n");
    printf("*********            5.存盘                 ********\n");
    printf("****************************************************\n");
    printf("****************************************************\n");
}
void Initcontact(park *pc)
{
    pc->sz = 0;
    //内存设置
    memset(pc->data, 0 , sizeof(pc->data));
}
void addcar(park* pc)
{
    if(pc->sz == max)
    {
        printf("车库已满，无法添加\n");
        return;
    }
    //添加一辆车
    printf("请输入停车性质：（short\\long）");
    scanf("%s",pc->data[pc->sz].attribute);
    printf("请输入车牌号：");
    scanf("%s",pc->data[pc->sz].carid);
    printf("请输入车位号：");
    scanf("%s",pc->data[pc->sz].num);
    printf("请输入车位编号：");
    scanf("%s",pc->data[pc->sz].region);
    printf("请输入开始时间：");
    scanf("%s",pc->data[pc->sz].ftime);
    printf("请输入结束时间：");
    scanf("%s",pc->data[pc->sz].htime);
    pc->sz++;
    printf("增加成功\n");
}
static int Findname(park* pc , char carid[])
{
    int i = 0;
    for( i = 0 ; i < pc->sz ; i++)
    {
        if(strcmp(pc ->data[i].carid , carid) == 0)
        {
            return i;
        }
    }
    return -1;//找不到
}
void deletecar(park* pc)
{
    char carid[20] = {0};
    if(0 == pc->sz)
    {
        printf("车库无车辆，无法删除\n");
        return;
    }
    printf("请输入要删除车辆的车牌号\n");
    scanf("%s",carid);
    //首先查找
    int post = Findname(pc ,carid);
    if(post == -1 )
    {
        printf("要删除的车辆不存在\n");
        return;
    }
    //删除
    int i = 0;
    for( i = post ; i < pc->sz-1 ; i++)
    {
        pc->data[i] = pc->data[i+1];
    }
    pc->sz--;
    printf("删除成功\n");
}
void searchcar(park *pc)
{
    char carid[20] = {0};
    printf("请输入要查找车辆的车牌号\n");
    scanf("%s",carid);
    int post = Findname(pc ,carid);
    if(post == -1 )
    {
        printf("要查找的车辆不存在\n");
        return;
    }
    else
    {
        printf("%-10s\t%-20s\t%-5s\t%-5s\t%-20s\t%-20s\n","停车性质","车牌号","车位号","车位编号","开始时间","结束时间");
        printf("%-10s\t%-20s\t%-5s\t%-5s\t\t%-20s\t%-20s\n",pc->data[post].attribute,
        pc->data[post].carid,pc->data[post].num,pc->data[post].region,pc->data[post].ftime,pc->data[post].htime);
    //打印数据
    }
}
void modifycar(park* pc)
{
    char carid[20] = {0};
    printf("请输入要修改车辆的车牌号\n");
    scanf("%s",carid);
    int post = Findname(pc ,carid);
    if(post == -1 )
    {
        printf("要修改的车辆不存在\n");
        return;
    }
    else
    {
        printf("请输入停车性质：（short\\long）");
        scanf("%s",pc->data[pc->sz].attribute);
        printf("请输入车牌号：");
        scanf("%s",pc->data[pc->sz].carid);
        printf("请输入车位号：");
        scanf("%s",pc->data[pc->sz].num);
        printf("请输入车位编号：");
        scanf("%s",pc->data[pc->sz].region);
        printf("请输入开始时间：");
        scanf("%s",pc->data[pc->sz].ftime);
        printf("请输入结束时间：");
        scanf("%s",pc->data[pc->sz].htime);
    }
}
void savecar(park* pc)
{
    assert(pc!=NULL);
    FILE* pff = fopen("车库信息记录.txt","a");
    int p = 0;
    if( pff == NULL)
    {
        perror("Savecar");
        return;
    }
    while(!feof(pff))
    {
        fprintf(pff,"%s %s %s %s %s %s\n",pc->data[p].attribute,
        pc->data[p].carid,
        pc->data[p].num,
        pc->data[p].region,
        pc->data[p].ftime,
        pc->data[p].htime);
        p++;
    }
    fclose(pff);
    pff = NULL;
}