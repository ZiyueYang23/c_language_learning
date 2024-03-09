#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

// 存放100个人的信息
// 增删查改功能
// 排序
// 显示
enum Function
{
    EXIT,
    ERROR = 1,
    SHOW = 6,
    BACK = 9,

}; // ！注意别掉;

int main()
{
    int input = 0;
    contacts contact;

    int temp = initContact(&contact);
    if (temp == ERROR)
    {
        return ERROR;
    }
    do
    {
        menu();
        printf("请选择你需要的功能:>");
        scanf("%d", &input);

        void (*pFun[FUN_NUM])(contacts *ps) = {EXIT, add, del, fin, edi, sort};

        if (input == EXIT)
        {
            SaveContact(&contact);
            DestroyContact(&contact);
            printf("保存成功\n");
            printf("退出通讯录\n");
        }
        else if (input == BACK)
        {
            printf("已是菜单无法再返回\n");
        }
        else if (input == SHOW)
        {
            show(&contact);
        }
        else if (input >= 1 && input <= FUN_NUM - 1)
        {
            pFun[input](&contact);
        }
        else
        {
            printf("请重新输入\n");
        }

    } while (input);

    return 0;
}

// 12-23-2023
// 初步完成静态通讯录
// 做了一些交互回退等等，还有几个bug还没想好咋优化
// 用枚举来优化代码增加可读性减少magic number
// 有一个地方偷懒用了goto

// 12-24-2023
// 大致完成动态版本
// 修了一下输错序号的bug，还不错

// 12-25-2023
// 文件版本完成大致没啥问题了;