// // 自己的版本带笔记的
// #include <stdio.h>
// #include <stdlib.h>
// //成熟
// typedef int DataType;
// //通过这个就可以自由控制你所需的元素类型，以后你想改char，double等等都可以。
// // // 第一步
// // struct LinkNode
// // {
// //     int data;
// //     struct LinkNode *next;
// // };

// // //第二步
// // typedef struct LinkNode
// // {
// //     int data;
// //     struct LinkNode *next;
// // } LinkNode;

// typedef struct LinkNode
// {
//     DataType data;
//     struct LinkNode *next;
// } LinkNode;

// void LinkedListPrint(LinkNode *p_head);
// void LinkedListPushBack(LinkNode *p_head,DataType addData);
// void TextLinkedList1();
// LinkNode *BuyLinkNode();
// //带返回值的版本
// // LinkNode *LinkedListPushFront(LinkNode *p_head, DataType addData);
// //不带返回值的版本
// void LinkedListPushFront(LinkNode**pp_head,DataType addData);
// //由于需要修改p_head的值也就是动头指针的指向
// void LinkedListPopBack(LinkNode**pp_head);
// void LinkedListPopFront(LinkNode **pp_head);

// int main()
// {
//     TextLinkedList1();
// }

// void TextLinkedList1()
// {
//     LinkNode *p_head = BuyLinkNode();

//     LinkedListPushFront(&p_head,-1);
//     LinkedListPushBack(p_head,1);
//     LinkedListPushBack(p_head,2);
//     LinkedListPushBack(p_head,3);
//     LinkedListPushBack(p_head,4);
//     LinkedListPushBack(p_head,5);
//     LinkedListPushBack(p_head,6);
//     LinkedListPushBack(p_head,7);
//     LinkedListPushBack(p_head,8);
//     LinkedListPushBack(p_head,9);

//     LinkedListPrint(p_head);
//     //这很难吗？？？！！
// }

// //无返回值二级指针版本--杭哥给的版本也不错
// void LinkedListPushFront(LinkNode **pp_head, DataType addData)
// {
//     LinkNode *p_newNode = BuyLinkNode();
//     p_newNode->data = addData;
//     p_newNode->next = *pp_head;

//     *pp_head = p_newNode;
// }

// //有返回值版本--个人感觉自己出来的非常巧妙
// // LinkNode *LinkedListPushFront(LinkNode *p_head, DataType addData)
// // {
// //     LinkNode *p_newNode = BuyLinkNode();
// //     p_newNode->data = addData;
// //     p_newNode->next = p_head;

// //     return p_newNode;
// // }

// LinkNode *BuyLinkNode()
// {
//     LinkNode *p_newNode = (LinkNode *)malloc(sizeof(LinkNode));
//     if (p_newNode == NULL)
//     {
//         perror("BuyLinkNode");
//         exit(EXIT_FAILURE);
//     }
//     p_newNode->data = 0;
//     p_newNode->next = NULL;

//     return p_newNode;
// }

// void LinkedListPrint(LinkNode *p_head)
// {
//     LinkNode *p_tmp = p_head;

//     while(p_tmp!=NULL)
//     {
//         if(p_tmp->next!=NULL)
//         {
//             printf("%d->", p_tmp->data);
//         }
//         else
//         {
//             printf("%d",p_tmp->data);
//         }
//         p_tmp =p_tmp->next;
//         //这个地方好好想想，next也是结构体指针，头指针是不动的，头指针承载的是整个链表的首地址，如果他动了也就找不到后面的数据了，通过tmp的移动来遍历链表的每一部分，将其中的数据打印出来。
//     }
// }

// void LinkedListPushBack(LinkNode *p_head, DataType addData)
// {
//     LinkNode *p_tail = p_head;

//     // 找尾巴
//     while (p_tail->next != NULL)
//     {
//         p_tail = p_tail->next;
//     }
//     // 这个地方思考一下

//     // 创建新节点
//     LinkNode *p_newNode = BuyLinkNode(p_newNode);
//     p_newNode->data = addData;
//     p_tail->next = p_newNode;
// }
// //当你删到最后一个的时候就需要改变头指针
// void LinkedListPopBack(LinkNode **pp_head)
// {
//     //追逐法
//     LinkNode *p_prev = NULL;
//     LinkNode *p_tmp = *pp_head;
//     while(p_tmp->next!=NULL)
//     {
//         p_prev = p_tmp;
//         p_tmp = p_tmp->next;
//     }

//     free(p_tmp);
//     p_tmp = NULL;

//     p_prev->next = NULL;
// }
// void LinkedListPopFront(LinkNode **pp_head)
// { 

// }

// //这个地方杭哥想的是在PushBack这个函数里面直接完成第一块的创建，但是需要传用2级指针，这个函数的功能不动，我只需要再封装一个初始化函数或者直接malloc申请一块内存即可，当然杭哥也可以帮助我们学习巩固二级指针的用法。
// // void LinkedListPushBack(LinkNode *p_head, DataType addData)
// // {
// //     LinkNode *p_tail = p_head;

// //     //创建新节点
// //     LinkNode *p_newNode = (LinkNode *)malloc(sizeof(LinkNode));
// //     p_newNode->data = addData;
// //     p_newNode->next = NULL;

// //     if(p_head==NULL)
// //     {
// //         p_head = p_newNode;
// //         //！注意这个地方你传p_head进来，尝试对他进行赋值给他第一个节点的地址，但是这是在函数里面，出了函数p_head的值仍是空指针。
// //         //就只是值传递。
// //         //~如果说你想在这个函数里面对这个值进行修改并且能影响到外面，就需要二级指针**
// //         //但是为何不直接在开头就创建一块呢何必这么麻烦。
// //     }
// //     else
// //     {
// //         while(p_tail->next!=NULL)
// //         {
// //             p_tail = p_tail->next;
// //         }

// //         p_tail->next = p_newNode;
// //     }
// //     //找尾巴
// //     //这个地方思考一下
// // }



// // //杭哥版本另一种思路
// // #include <stdio.h>
// // #include <stdlib.h>

// // typedef int DataType;

// // typedef struct LinkNode
// // {
// //     DataType data;
// //     struct LinkNode *next;
// // } LinkNode;

// // void LinkedListPrint(LinkNode *p_head);
// // void LinkedListPushBack(LinkNode **pp_head, DataType addData);
// // void TextLinkedList1();

// // int main()
// // {
// //     TextLinkedList1();
// // }

// // void TextLinkedList1()
// // {
// //     LinkNode *p_head = NULL;

// //     LinkedListPushBack(&p_head, 0);
// //     LinkedListPushBack(&p_head, 1);
// //     LinkedListPushBack(&p_head, 2);
// //     LinkedListPushBack(&p_head, 3);
// //     LinkedListPushBack(&p_head, 4);
// //     LinkedListPushBack(&p_head, 5);
// //     LinkedListPushBack(&p_head, 6);
// //     LinkedListPushBack(&p_head, 7);
// //     LinkedListPushBack(&p_head, 8);
// //     LinkedListPushBack(&p_head, 9);

// //     LinkedListPrint(p_head);
// // }

// // void LinkedListPrint(LinkNode *p_head)
// // {
// //     LinkNode *p_tmp = p_head;

// //     while (p_tmp != NULL)
// //     {
// //         if (p_tmp->next != NULL)
// //         {
// //             printf("%d->", p_tmp->data);
// //         }
// //         else
// //         {
// //             printf("%d", p_tmp->data);
// //         }
// //         p_tmp = p_tmp->next;
// //     }
// // }

// // void LinkedListPushBack(LinkNode **pp_head, DataType addData)
// // {
// //     LinkNode *p_tail = *pp_head;

// //     LinkNode *p_newNode = (LinkNode *)malloc(sizeof(LinkNode));
// //     p_newNode->data = addData;
// //     p_newNode->next = NULL;

// //     if(*pp_head==NULL)
// //     {
// //         *pp_head = p_newNode;

// //     }
// //     else
// //     {
// //         while(p_tail->next!=NULL)
// //         {
// //             p_tail = p_tail->next;
// //         }

// //         p_tail->next = p_newNode;
// //     }
// // }


//！1-27 nirvana start

//@ Complex number calculator
#include <stdio.h>

typedef struct
{
    double realPart;
    double imagPart;
} Complex;

void AddComplex(Complex *z1, Complex *z2);

void AssignComplex(Complex*z1, Complex*z2);

int main(void)
{
    Complex z1 = {0.0, 0.0};
    Complex z2 = {0.0, 0.0};

    AssignComplex(&z1, &z2);
    AddComplex(&z1, &z2);

    return 0;
}
void AssignComplex(Complex *z1, Complex *z2)
{
    printf("请输入需要计算两复数的值:>");
    scanf("%lf%lf", &z1->realPart, &z1->imagPart);
    scanf("%lf%lf", &z2->realPart, &z2->imagPart);
}
void AddComplex(Complex *z1, Complex *z2)
{
    Complex z3 = {0.0, 0.0};

    z3.realPart = z1->realPart + z2->realPart;
    z3.imagPart = z1->imagPart + z2->imagPart;

    printf("z1+z2=%f+(%f)i", z3.realPart, z3.imagPart);
}
