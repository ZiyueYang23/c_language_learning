#include "contact.h"

// 存放100个人的信息
// 增删查改功能
// 排序
// 显示

int main()
{
    int input = 0;
    contacts contact;

    initContact(&contact);
    do
    {
        menu();
        printf("请选择你需要的功能:>");
        scanf("%d", &input);

        void (*pFun[FUN_NUM])(contacts *ps) = {0, add, del, fin, edi, sort};

        if (input == 0)
        {
            DestroyContact(&contact);
            printf("退出通讯录\n");
        }
        else if (input == 9)
        {
            printf("已是菜单无法再返回\n");
        }
        else if (input == 6)
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
//用枚举来优化代码增加可读性减少magic number
//有一个地方偷懒用了goto
//大致完成动态版本
//为何打印出问题了？？？
//多了一行空格