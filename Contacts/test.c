#include "Contacts.h"

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
            printf("退出通讯录\n");
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

// int main()
// {
//     int input = 0;
//     contacts contact;

//     initContact(&contact);
//     do
//     {
//         menu();
//         printf("请选择你需要的功能:>");
//         scanf("%d", input);

//         void (*pFun[FUN_NUM])(contacts *ps) = {0, add, del, fin, edi, sort, show};

//         if(input==0)
//         {
//             printf("退出通讯录\n");
//         }
//         else if(input>=1&&input<=FUN_NUM)
//         {
//             pFun[input](&contact);
//         }
//         else
//         {
//             printf("请重新输入\n");
//         }

//     } while (input);

//     return 0;
// }