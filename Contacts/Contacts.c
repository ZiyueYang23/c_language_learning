#include "Contacts.h"

void menu(void)
{
    printf("**********************************\n");
    printf("*******   1.Add   2.Del    *******\n");
    printf("*******   3.Fin   4.Edi    *******\n");
    printf("*******   5.Sort  6.Show   *******\n");
    printf("*******   0.exit  9.back   *******\n");
    printf("**********************************\n");
}

void initContact(contacts *ps)
{
    ps->counter = 0;
    memset(ps->data, 0, sizeof(ps->data)); // ！细细体会这个地方看鹏哥的
}

void add(contacts *ps)
{
    if (ps->counter == PEOPLE) // ！没想严密
    {
        printf("通讯录已满,添加失败。\n");
    }
    else
    {
        printf("请输入姓名:>");
        scanf("%s", ps->data[ps->counter].name); // 我想加一个返回功能就是输错了返回上一级

        if (0 == strcmp(ps->data[ps->counter].name, "9"))
        {
            return; //~初步做了一个返回的东东
        }

        printf("请输入年龄:>");
        scanf("%d", &(ps->data[ps->counter].age)); // ！ 这个地方一定要注意，&，其他都是数组数组名就是首元素地址

        printf("请输入性别:>");
        scanf("%s", ps->data[ps->counter].sex);

        printf("请输入电话:>");
        scanf("%s", ps->data[ps->counter].tele);

        printf("请输入地址:>");
        scanf("%s", ps->data[ps->counter].addr);
        ps->counter++;
    }
}

void show(const contacts *ps)
{
    printf("\n*******                                                                *******\n");
    printf("===================================*通讯录*===================================\n");
    printf("%-3s\t%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "序号", "姓名", "年龄", "性别", "电话", "地址");

    for (int i = 0; i < ps->counter; i++) // 这个地方对ps->counter 的理解
    {
        printf("%-3d\t%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", i + 1, ps->data[i].name,
               ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
    }
    // ！这个地方需要注意制表的方法细细体会
    printf("\n");
}
// 删除
void del(contacts *ps)
{
    // 找到
    char ret[20] = {0};
    int flag = 1;
    int a = 0;

    printf("请输入想要删除的人的名字:>");
    scanf("%s", ret);

    if (0 == strcmp(ret, "9"))
    {
        return; //~初步做了一个返回的东东
    }

    int pos = discover(ret, ps);
    // 删除
    if (pos > 0)
    {
        printf("请输入想要删除的人的序号:>");
        scanf("%d", &a);
        for (int i = a; i < ps->counter; i++)
        {
            ps->data[i - 1] = ps->data[i];
        }
        ps->counter--;
        printf("删除成功\n");
    }
}

void fin(contacts *ps)
{
    char arr1[20] = {0};

    printf("请输入你想查找的人的名字:>");
    scanf("%s",arr1);

    if (0 == strcmp(arr1, "9"))
    {
        return; //~初步做了一个返回的东东
    }
    int temp = 0;
    
    temp=discover(arr1, ps);
}

int discover(const char ret[], const contacts *ps)
{
    int cnt = 0;

    for (int i = 0; i < ps->counter; i++)
    {
        int tmp = 1;

        tmp = strcmp(ret, ps->data[i].name);

        if (tmp == 0)
        {
            if (cnt == 0)
            {
                printf("找到如下结果:\n");
                printf("%-3s\t%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n",
                       "序号", "姓名", "年龄", "性别", "电话", "地址");
                printf("%-3d\t%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", i + 1, ps->data[i].name,
                       ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
            }
            else
            //！这里有一个bug就是如果你一不小心删的不是显示出来的他也会删除要养成看报错信息的习惯，虽然说多文件他不会跨文件报错
            //！你终端运行不起来，别的程序可以启动终端就说明是你这个多文件的某些地方出了问题，终端提示信息往上翻就会有提示信息，别急别慌
            //！终端运行不起来，目前遇到的情况就是你在自己的头文件声明的函数，你在.c文件却没有定义它，这种情况会导致终端运行不起来。
            {
                printf("%-3d\t%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", i + 1, ps->data[i].name,
                       ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
            }
            cnt++;
        }
    }

    if (cnt == 0)
    {
        int a = 0;

        printf("未找到该人，请您检查输入是否正确。\n");
        printf("是否还需重新输入一次   0.不需要   1.重新输入:>");
        scanf("%d", &a);

        if (a == 1)
        {
            char ret1[20] = {0};
            printf("请重新输入你需要查找的人的姓名");
            scanf("%s", ret1);
            discover(ret1, ps);
        }
        else if (a != 0 && a != 1)
        {
            do
            {
                printf("请重新输入\n");
                scanf("%d", &a);
            } while (a != 0 && a != 1);
        }
    }
    return cnt;
}
//！！tmd刚刚一不小心把这两个函数的功能给删了tmd头文件声明这里不给定义直接终端打不开，我找问题找半天
void edi(contacts *ps)
{

}
// 排序
void sort(contacts *ps)
{

}