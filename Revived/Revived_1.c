#define _CRT_SECURE_NO_WARNINGS 1
// #include <stdio.h>
// int f(int);

// int main()
// {
//     int a = 1;
//     printf("%d\n", a);

//     f(a);

//     printf("%d\n", f(a));
// }

// int f(int a)
// {

//     ++a;

//     return a;
// }

// #include <stdio.h>

// int Max(int a, int b);

// int main()
// {
//     int a = 10;
//     int b = 20;

//     printf("%d", Max(a, b));

//     return 0;
// }

// int Max(int a,int b)
// {
//     return a > b ? a : b;
// }

// 调试完毕vscode启动！！！
// Revived！！
// Rebrith！！
//  #include <stdio.h>

// int A = 10;  //全局变量

// void F(int);

// int main()
// {
//     int a;
//     scanf("%d", &a);

//     F(a);

//     return 0;
// }

// void F(int a)
// {
//     static int b = 9;

//     if(A>b)
//     {
//         printf("%d", a);
//     }
// }
//

// #include <stdio.h>
// int main()
// {
//     int a = 123;
//     printf("%-9d\n", a);
//     printf("%+9d\n", a);
//     printf("%09d\n", a);
//     printf("% 9d\n", a);

//     return 0;
// }

// 首先呢别沾沾自喜，其次说别把别人想得太屌，只不过是多花点时间罢了对吧，何况你是再猜人家有多吊与你有何干？？反正是陌生人对吧，只要一和你有交集就是来给你装逼的，这种人什么成分我不说好吧，不理他就是了，干嘛要打乱自己的节奏，干嘛要去想别人，一个你人生中的过客呢？？？继续努力做好自己该做的事情，无所谓比较我不在乎，我不屑的话就与世无争

// 现在就不是比快也没啥可比性是不是，一切的目的是为了成为更好的自己，我学的扎实，我花的时间都没有浪费，我不比谁差，我的绝大多数时间都是在自习，我为什么要觉得低人一等呢？？？值当是寒假回家嘛，慢慢来，慢就是快，别着急哥们，我很好我很棒，去锻炼自己的编程思维，编程能力。

// #include <stdio.h>

// int myStrlen(char *point);

// int main()
// {
//     char array[] = "abcdefg";

//     int len = myStrlen(array);

//     printf("%d", len);

//     return 0;
// }

// int myStrlen(char *point)
// {
//     char *p = point;

//     while(*p!='\0')
//     {
//         p++;
//     }

//     return (p - point);
// }

// #include <stdio.h>
// int main()
// {
//     int array[10] = {0};
//     int *p = array;
//     int len = sizeof(array) / sizeof(array[0]);

//     for (int i = 0; i < len;i++)
//     {
//         *p++ = 1;
//         printf("%d----%p----%p\n", array[i], &array[i], p);
//     }

//     return 0;
// }

// Complete myStrcpy();

// #include <stdio.h>
// #include <assert.h>

// char *myStrcpy(char *destination, char *src);

// int main()
// {
//     char arr1[20] = "hello world!";
//     char arr2[] = "xxxxxxxxxxxxxxx";

//     printf("%s \n", myStrcpy(arr2, arr1));

//     return 0;
// }

// char *myStrcpy(char *dest, char *src)
// {
//     char *ret = src;

//     while (*dest++ = *src++)
//         ;

//     return ret;
// }

// 指针数组--重的是数组，每一个元素是指针
//  #include <stdio.h>
//  int main()
//  {
//      int arr1[] = {
//          1,
//          2,
//          3,
//          4,
//          5,
//      };
//      int arr2[] = {
//          2,
//          3,
//          4,
//          5,
//          6,
//      };
//      int arr3[] = {
//          3,
//          4,
//          5,
//          6,
//          7,
//      };

//     int *parry[] = {arr1, arr2, arr3};

//     for (int i = 0; i < sizeof(parry) / sizeof(parry[0]);i++)
//     {
//         for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++)
//         {
//             // printf("%d ", *(parry[i] + j));
//             printf("%d ", parry[i][j]);
//             //注意这个地方*(p+i)=>p[i],这个有点类似于二维数组的感觉，两个for循环
//         }
//         printf("\n");
//     }
//         return 0;
// }

// //数组指针--重的是指针，是指向数组的指针
// //初探
// #include <stdio.h>
// int main()
// {
// int arr[] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//         6,
//     };

//     printf("%p\n", arr);
//     printf("%p\n", &arr[0]);
//     printf("%p\n", &arr);
//     //这里注意一个东东，arr是代表数组首元素的地址，那&arr又是什么意思呢？
//     //这里注意到说上面三个值输出的结果都相同但是所代表的意义是不一样，为了测试具体看到做了如下代码
//     //其中arr+1是首元素的地址加一，动四个字节（）int型变量
//     //同理说&arr【0】+1应该是看成（（&arr【0】）+1）这样，与上面的结果是一样的。
//     //但是注意到第三个结果不一样而且有较大差距，注意这个地方是十六进制18
//     //来数一遍 1 2 3 4 5 6 7 8 9  A  B  C  D  E  F  10 11 12 13 14 15 16 17 18 19
//     //        1 2 3 4 5 6 7 8 9 10 11 12 13 14 15  16 17 18 19 20 21 22 23 24 25
//     //也就是说差了十进制24，这说明什么呢，&arr代表的是整个数组，它的值是与arr，&arr【0】均相同，
//     //都是首元素地址，但是所代表的含义是不同的，+1即可体现出来，&arr+1直接动了一整个数组的大小6*4
//     //而其余两个就是直接动了一个元素的大小也就是4个字节

//     printf("%p\n", arr+1);
//     printf("%p\n", &arr[0]+1);
//     printf("%p\n", &arr+1);

//     printf("%d\n", sizeof(&arr));
//     //想不明白为何输出的是8
//     printf("%d\n", sizeof(arr));
//     //这个地方要注意，arr平常是代表数组首元素的地址，但是当arr在sizeof里面用的时候arr的代表意思是计算整个数组名的大小，arr代表整个数组
//     //所以输出是24，也就是6*4。
//     printf("%d\n", sizeof(arr[0]));
//     //这个就是正常的单一数组元素输出是4
//     printf("%d\n", sizeof(*arr+1));
//     //巩固上面的知识顺便测试了一下*的优先级
//     printf("%d\n", sizeof(*(arr+1)));

//     //那么问题来了&arr是整个数组的地址，那么应该拿什么来承载这个整个数组的地址呢？
//     int(*p)[6] = &arr;
//     //指向数组的指针叫数组指针，指针变量p的值是整个数组的地址，虽然说值就是首元素地址但是含义是不一样的
//     //p的类型是  int (*)[6],这个类型，p指向整个数组；
//     //另外要注意的是那个6不能省略，就是代表指向int [6]这个类型的指针，叫数组指针
//     return 0;
// }
// //总结一下只有在sizeof（数组名）这一种情况下数组名代表的是整个数组，其余情况均是首元素地址，另外注意说是
// //&arr的意思就是整个数组，arr就是单一首元素的地址，可以借助谭浩强里面那本书在对&符号与*在二维指针数组的解释
// //&的作用是把指向转向行，即指向的就是一整行，而*的作用的是把指向转向列，即指向的就是单一的一个“点”。

////再探
// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//         6,
//         7,
//         8,
//         9,
//         10,
//     };
//     int(*p)[10] = &arr;
//     //注意这个地方的规范就是要把10带上，就是指向有十个int型元素的数组；

//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//     {
//         // printf("%d ", *p[i]); //err
//         // printf("%d ", *p); //err
//         // printf("%d ", (*p)[i]); //right
//         printf("%d ", *(*p+i)); //right
//         //p是行地址，是指向整个数组的地址指向这一行，就如同arr加一个&arr，从列地址，即指向单一数据的转为行地址
//         //指向整个数组，&是列转行，*就是行转列，就是让p从指向一整行的地址转为指向单一数据
//         //*p=arr，p=&arr
//         //确定这个之后再去思考如何去打印输出你想要的值，移动即可，注意我在这个地方还进行了一个优先级测试，*p[i]是错的，先衔接下标也就是直接动了
//         //一整个数组的值然后输出后面的值了
//         //应该让*p先结合来代表arr，借助arr来思考会好一点然后arr[i]去输出每一个值
//         //数组指针在一维数组上有点画蛇添足，很变扭，非要&arr地址，还要加一堆东西才能完成输出确实很变扭，但是说，数组指针真正用到的地方是2维数组
//         //三维数组上。就如同我对&，和*作用的理解上，是基于二维数组来进行的，如果说一维数组，这个作用似乎不能这么理解对吧。
//     }

//         return 0;
// }

// //具体应用场景
// #include <stdio.h>

// void print1(int arrat[3][5], int row, int col);

// void print2(int (*p)[5], int row, int col);

// int main()
// {
//     int array[3][5] = {
//         1,
//         2,
//         3,
//         4,
//         5,
//         6,
//         7,
//         8,
//         9,
//         10,
//         11,
//         12,
//         13,
//         14,
//         15,
//     };

//     print1(array,3,5);

//     print2(array,3,5);

//     return 0;
// }

// void print1(int array[3][5], int row, int col)
// {
//     for (int i = 0; i < row;i++)
//     {
//         for (int j = 0; j < col;j++)
//         {
//             printf("%2d\t", array[i][j]);
//         }

//         printf("\n");
//     }
// }

// void print2(int (*p)[5], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             printf("%2d\t",*(*(p+i)+j));
//             // printf("%2d\t",*(*(array+i)+j));
//             // array   是二维数组的首元素的地址也就是编号为第零行的地址&array[0]
//             // array[i]是一维数组的首元素地址也就是&array[0][0]
//             // array[0][0]就已经是值了
//             // printf("%2d\t",*(array[i]+j));
//             // 同样类比
//             // p是指针变量，是指向一维数组的指针变量，即数组指针
//             // p=array=&array[0]=& *（array+0）
//             // 这就是下标在编译器中的真正处理方式
//             //理论上说* &是一对可以抵消，& []也同样是一对可以抵消
//            printf("%2d\t",*(p[i]+j));
//         }

//         printf("\n");
//     }
// }

// // 总结
// //{
// // 问如下是什么东东
// // 1.int array[5];
// // 2.int *parray[5];//[]的优先级是大于*的如果说*p[];p是先和下标结合，这里就是指针数组，存放指针的数组

// // 3.int (*parray)[5];
// //前三很简单，主要是第四个
// // 4.int (*parray[10])[5];  --首先把parray[10]拿掉就是 int (* )[5]这是什么东东，数组指针，但是呢变量名是parray[10]
// //也就是说是一个数组指针的数组，里面有十个指向《整型数组且整型数组中元素个数为5》的（数组）指针，
// //}

// 函数指针
//  #include <stdio.h>

// int Add(int, int);

// int main(void)
// {
//     int temp = 0;
//     int (*p)(int, int) = &Add;
//     // or int (*p)(int, int) = Add;
//     //无论用&Add或者是用Add都是函数的地址加不加，都是地址
//     //so 你会想有啥用呢？？？
//     //咋用呢？？

//     int ret = (*p)(5, 6);
//     // or int ret = p(5, 6);
//     // or int ret = (**********p)(5, 6);
//     //这三种方式都可调用函数，第一种正常很好理解，那单p（int，int）为啥能用呢？？
//     //就和Add一样，p=&Add，*p=Add，对不对，那这俩都是地址你说呢？
//     // （****）就是摆设（*p）便于你理解

//     temp = Add(2, 3);

//     printf("%d %d \n", temp,ret);
//     printf("%p %p \n", Add, &Add);
//     printf("%p %p \n", *Add, &*Add);
//     printf("%p %p \n", *p, *****p);
// //这个地方就可以看出Add与&Add是一样的
// //无论如何这个地方随你怎么取地址怎么解引用地址都是这个值

//     return 0;
// }

// int Add(int a, int b)
// {
//     return (a + b);
// }

// 那么这时候就想问了，函数指针有啥用的呢，该咋用呢？？？
// show time

// //版本一---没有明显问题但是很冗杂在case那个地方
// #include <stdio.h>

// void Menu();

// void Add(int, int);
// void Sub(int, int);
// void Mul(int, int);
// void Div(int, int);

// // void Cal(int (*p)(int, int));

// int main(void)
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;

//     do
//     {
//         Menu();

//         printf("请选择>:");
//         scanf("%d", &input); // 加&&&&&&&&&&！！！！！！
//         switch (input)
//         {
//         case 0:
//             printf("退出计算器\n");
//             break;
//         case 1:
//             printf("请输入两个操作数>:");
//             scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

//             Add(x,y);
//             break;
//         case 2:
//             printf("请输入两个操作数>:");
//             scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

//             Sub(x,y);
//             break;
//         case 3:
//             printf("请输入两个操作数>:");
//             scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

//             Mul(x,y);
//             break;
//         case 4:
//             printf("请输入两个操作数>:");
//             scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

//             Div(x,y);
//             break;
//         default:
//             printf("请重新输入\n");
//             break;
//         }
//     } while (input);

//     return 0;
// }

// void Menu()
// {
//     printf("*******************************\n");
//     printf("*****   1.Add    2.Sub  *******\n");
//     printf("*****   3.Mul    4.Div  *******\n");
//     printf("*****        0.exit     *******\n");
//     printf("*******************************\n");
// }

// void Add(int x, int y)
// {
//     printf("%d\n", x + y);
// }

// void Sub(int x, int y)
// {
//     printf("%d\n", x - y);
// }

// void Mul(int x, int y)
// {
//     printf("%d\n", x * y);
// }

// void Div(int x, int y)
// {
//     printf("%d\n", x / y);
// }

// // void Cal(int (*p)(int x, int y))
// // {
// //     int x = 0;
// //     int y = 0;

// //     printf("请输入两个操作数>:");
// //     scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

// //     p(x, y);
// // }

// // 版本二---函数指针的实际用处
// //初探回调函数
// #include <stdio.h>

// void Menu();

// void Add(int, int);
// void Sub(int, int);
// void Mul(int, int);
// void Div(int, int);

// void Cal(int (*p)(int, int));

// int main(void)
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;

//     do
//     {
//         Menu();

//         printf("请选择>:");
//         scanf("%d", &input); // 加&&&&&&&&&&！！！！！！
//         switch (input)
//         {
//         case 0:
//             printf("退出计算器\n");
//             break;
//         case 1:
//             Cal(&Add);
//             break;
//         case 2:
//             Cal(&Sub);
//             break;
//         case 3:
//             Cal(&Mul);
//             break;
//         case 4:
//             Cal(&Div);
//             break;
//         default:
//             printf("请重新输入\n");
//             break;
//         }
//     } while (input);

//     return 0;
// }

// void Menu()
// {
//     printf("*******************************\n");
//     printf("*****   1.Add    2.Sub  *******\n");
//     printf("*****   3.Mul    4.Div  *******\n");
//     printf("*****        0.exit     *******\n");
//     printf("*******************************\n");
// }

// void Add(int x, int y)
// {
//     printf("%d\n", x + y);
// }

// void Sub(int x, int y)
// {
//     printf("%d\n", x - y);
// }

// void Mul(int x, int y)
// {
//     printf("%d\n", x * y);
// }

// void Div(int x, int y)
// {
//     printf("%d\n", x / y);
// }

// void Cal(int (*p)(int x, int y))
// {
//     int x = 0;
//     int y = 0;

//     printf("请输入两个操作数>:");
//     scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

//     (*p)(x, y);
// }

// 版本三---函数指针数组--转换表
// 函数指针的数组
// 转换表

// //目的是，如果说我想加新功能，加十个加15个那你case要写十五个吗？
// //接下来就要用到函数指针数组
// #include <stdio.h>

// #define NUMBER 5
// //未来大一点的项目就可以建一个新文件夹，然后把声明都放进.h里面，然后定义放game.c里面，再放一个test.c装这个就行咯

// void Menu();

// void Add(int, int);
// void Sub(int, int);
// void Mul(int, int);
// void Div(int, int);

// void Cal(int (*p)(int, int));

// int main(void)
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;

//     void (*(parray[NUMBER]))(int, int) = {
//         0,
//         Add,
//         Sub,
//         Mul,
//         Div,
//     };

//     do
//     {
//         Menu();

//         printf("请选择>:");
//         scanf("%d", &input);

//         if(input==0)
//         {
//             printf("退出计算机 \n");
//         }
//         else if (input >= 1 && input <= NUMBER)
//         {
//             int x = 0;
//             int y = 0;

//             printf("请输入两个操作数>:");
//             scanf("%d %d", &x, &y);
//             //很巧妙的是在前面加了一个零，你输入input直接就可以作为数字进去代表函数，如果没有的话就减一就行

//             parray[input](x, y);
//             // parray[1]=Add,parray[1](x,y)=Add(x,y)
//         }
//         else
//         {
//             printf("请重新输入 \n");
//         }

//     } while (input);
// 就可以简化代码咯
// 后期维护也就可以直接改NUMBER 和直接往数组里面加函数名就行了
//     do
//     {
//         Menu();

//         printf("请选择>:");
//         scanf("%d", &input); // 加&&&&&&&&&&！！！！！！
//         switch (input)
//         {
//         case 0:
//             printf("退出计算器\n");
//             break;
//         case 1:
//             Cal(&Add);
//             break;
//         case 2:
//             Cal(&Sub);
//             break;
//         case 3:
//             Cal(&Mul);
//             break;
//         case 4:
//             Cal(&Div);
//             break;
//         default:
//             printf("请重新输入\n");
//             break;
//         }
//     } while (input);

//     return 0;
// }

// void Menu()
// {
//     printf("*******************************\n");
//     printf("*****   1.Add    2.Sub  *******\n");
//     printf("*****   3.Mul    4.Div  *******\n");
//     printf("*****        0.exit     *******\n");
//     printf("*******************************\n");
// }

// void Add(int x, int y)
// {
//     printf("%d\n", x + y);
// }

// void Sub(int x, int y)
// {
//     printf("%d\n", x - y);
// }

// void Mul(int x, int y)
// {
//     printf("%d\n", x * y);
// }

// void Div(int x, int y)
// {
//     printf("%d\n", x / y);
// }

// void Cal(int (*p)(int x, int y))
// {
//     int x = 0;
//     int y = 0;

//     printf("请输入两个操作数>:");
//     scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

//     (*p)(x, y);
// }
// int(*(变量名))(int,int);
// 这个是函数指针
// int(*()[])(int ,int);
// 这个是函数指针数组，存放函数指针的数组，刚刚上面用来做了转换表
// int(*(*(变量名))[])(int,int);
// 这个是指向函数指针数组的指针
// 首先int (*parray[]) (int ,int );// 这是函数指针数组
// 现在要指针指向函数指针数组
// int ( * (* pparray)[] ) (int ,int )=&parray;
// 这个地方也同理先是*pparray是指针，类型是int（* (变量名) [] ）（int，int）
// 指向函数指针数组的指针（了解即可）
//

// 回调函数

// 先复习一下排序
// 记得就是
// 1.冒泡排序
//  #include <stdio.h>

// void bubbleSort(int array[], int sz);
// void printSort(int array[], int sz);

// int main()
// {
//     int array[10] = {
//         9,
//         8,
//         7,
//         6,
//         5,
//         4,
//         3,
//         2,
//         1,
//         0,
//     };
//     int sz = 0;

//     sz = sizeof(array) / sizeof(array[0]);

//     bubbleSort(array, sz);
//     printSort(array, sz);

//     return 0;
// }

// void bubbleSort(int array[], int sz)
// {
//     int flag = 1;

//     for (int i = 0; i < sz - 1; i++)
//     {
//         for (int j = 0; j < sz - 1 - i;j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 int tmp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = tmp;
//                 flag = 0;
//             }
//         }

//         if(flag==1)
//         {
//             break;
//         }
//     }

// }

// void printSort(int array[], int sz)
// {
//     for (int i = 0; i < sz;i++)
//     {
//         printf("%d ", array[i]);
//     }
// }

// //2.选择排序
// #include <stdio.h>

// void selectSort(int array[], int sz);
// void printSort(int array[], int sz);

// int main()
// {
//     int array[10] = {
//         9,
//         8,
//         7,
//         6,
//         5,
//         4,
//         3,
//         2,
//         1,
//         0,
//     };
//     int sz = 0;

//     sz = sizeof(array) / sizeof(array[0]);

//     selectSort(array, sz);
//     printSort(array, sz);

//     return 0;
// }

// void selectSort(int array[], int sz)
// {
//     int flag = 1;

//     for (int i = 0; i < sz - 1; i++)
//     {
//         for (int j = i; j < sz; j++)
//         {
//             if (array[i] > array[j + 1])
//             {
//                 int tmp = array[i];
//                 array[i] = array[j + 1];
//                 array[j + 1] = tmp;
//                 flag = 0;
//             }
//         }

//         if (flag == 1)
//         {
//             break;
//         }
//     }
// }

// void selectSort(int array[], int sz)
// {
//     int flag = 1;

//     for (int i = 0; i < sz - 1;i++)
//     {
//         for (int j = i + 1; j < sz;j++)
//         {
//             if(array[i]>array[j])
//             {
//                 int tmp = array[i];
//                 array[i] = array[j];
//                 array[j] = tmp;

//                 flag = 0;
//             }
//             if(flag==1)
//             {
//                 break;
//             }
//         }
//     }
// }

// void printSort(int array[], int sz)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }

// 基础扎实底子厚我怕啥，学c学了四遍谁比得过我？？

// // void* 这个东东
// // void*可以装地址，常用在函数指针里面传过来一个不确定的类型的地址过来
// // 但是 void *p;这个东西就只能是用来承载地址，不能对它解引用也不能对它进行加减运算，为啥，没类型系统都不知道怎么动

// // qsort这个库函数类型的用法
// #include <stdio.h>
// #include <stdlib.h>
// // void qsort(void *base, size_t num, size_t width, int (*cmp)(const void *e1, const void *e2));

// // 这是它的标准声明
// //  void *base,给数组地址，要排序的东西的首元素地址
// //  size_t num,给你要排几个元素  sizeof(arr)/sizeof(arr[0])
// //  size_t width, 每一个元素的大小，由于类型不确定，你需要给出每一个元素的大小  sizeof(arr[0])
// //  int (*cmp)(const void *e1, const void *e2)，关键点就在这里，也是这个库函数的精髓，就是你指定排序的规则（自己再做一个函数）
// //  然后把函数地址传给这个库函数让它帮你完成快速排序
// //  对其解释，为何用它，注意他都是void*，也就是你可以比较任何类型的数据，按照你想要的排序规则，这个库函数来帮你按照你的规则排序出你想要的类型

// int cmp_int(const void *e1, const void *e2);
// // Name is cmp_int,it is main that this is a int sort;
// void printSort(int array[], int sz);

// int main()
// {
//     int arr[10] = {
//         0,
//         1,
//         2,
//         3,
//         4,
//         5,
//         6,
//         7,
//         8,
//         9,
//     };

//     qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
//     printSort(arr, sizeof(arr) / sizeof(arr[0]));

//     return 0;
// }

// // 版本一
// //  int (*cmp_int)(const void *e1, const void *e2)
// //  {
//      //库函数对这个你指定规则的函数的返回值有要求，如何理解呢？你要实现排序，脱离出int类型排序的思维体系，int型就只有一个数比另一个数大或小或等于
//      //但是请注意别的型呢？比如你要排序一个结构体数组，这里面有十个人的姓名学号分数等等，它比较先后的规则就是你指定的，但是他要返回值给库函数，让电脑
//      //知道奥这个比那个大
//      //规则就是如果大就返回>0的数，小于就返回<0的数，相等就返回0
//      //if(*e1>*e2)
//      //error 注意要强转
// //      if(*(int*)e1>*(int*)e2)
// //          return 1;
// //      if(*(int*)e2>*(int*)e1)
// //          return -1;
// //      else
// //          return 0;

// // }

// // 版本二

// int cmp_int(const void *e1, const void *e2)
// {
//     return *(int *)e2 - *(int *)e1;
// }

// void printSort(int arr[], int sz)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// // 注意sizeof的用法
// // int a[5];
// // sizeof(a),只要是数组名单独用就是代表整体的
// // int a[3][5]
// // sizeof(a),就是3*5*4
// // sizeof(a[0]),就是5*4，就是这一行，如果单拿出来（或者说除sizeof其余情况）a[0]就是首元素地址就是指向a[0][0],  不是行指针，此时的a是行指针

// 新插件的好用注释
//-哈哈哈这个有意思
// todo 还挺漂亮
// ？ 蓝的颜色有一点浅，现在咋样
// ！ 这个警示也还行
//@  嘎嘎帅

//~strlen
// 1.结束
// 2.size_t无符号
// 3.拓展一下字符串和字符数组的区别联系一下sizeof与strlen
//@ 紫色真帅
// todo
// ！
//~strcpy
// 1.结束
// 2.char*返回值
// 3.自己尝试实现

// #include <stdio.h>
// #include <string.h>
// #include <assert.h>

// char *myStrcpy(char *destination, const char *source);

// int main()
// {
//     char arr1[20] = {'a', 'b', 'c', 'd', 'e', '\0'};
//     char arr2[20] = "Hello world!xxxxxxx";
//     char arr3[20] = {0};
//     char *parr = "abcdef";

//     //strncat(arr2, "!!!", 2);
//     strncpy(arr2, arr1,3); //~right
//     // strcpy(arr2, arr1);  //！err
//     // 为了避免出错我在字符数组加了 '\0'
//     // 虽然说运行结果好像没啥问题但是说这个在别的编译器上是有问题的怎么理解
//     // 你把一复制过去，但是1里面是没有'\0'的，它按理说不知道怎么停但是是这个编译器牛逼可以自动帮你补
//     // strcpy(parr, arr2);  //！err
//     // 没有字符串变量，这个字符串你创建了就是就是这么多你不能改,它叫字符串常量自然也就不能更改。你把他存进数组里你可以改字符数组里
//     // 面的元素，在打印数组，你那个字符串还是在哪里的。
//     //myStrcpy(arr3, arr1);
//     // vs真他妈舒服我靠
//     //printf("%s\n", arr3);
//     printf("%s\n", arr2);

//     return 0;
// }

// char *myStrcpy(char *destination, const char *source)
// {
//     assert(destination && source);
//     char *ret = destination;
//     // easy
//     //  assert(destination != NULL);
//     //  assert(source != NULL);
//     do
//     {
//         /* code */
//         *destination++ = *source++;

//     } while (*source != '\0');

//     return ret;
// }

//@ strstr库函数
// 子字符串查找
// 难点在与自己尝试实现！！！

// isspace（）用处是如果你用指针遍历一个数组if遇到space就p++
// ！
// ！写博客的一个思路是教别人如何用Github，如何装vscode，如何远程管理，如何用git，如何配置好自己的编译器插件，如何调整用好的字体
// ！如何更改设置，代码注释提示的那个东东是自己查的其余视频里面有，调整好的主题
// ！看我收藏的鹏哥的视频寒假慢慢玩
// ！
// #include <stdio.h>

// struct score
// {
//     int math;
//     int chinese;
//     int english;
// // } s; //定义方式之一，此时是全局变量
// };

// struct Student
// {
//     char name[20];
//     int age;

//     struct score s; //！注意你要给个名字，就相当于在这个地方给了s的定义
// };

// int main()
// {
//     struct Student Yzy = {"Yang Ziyue", 18, {100, 100, 100}}; //定义方式之二，是局部变量
//     // struct score s;

//     printf("%s %d %d %d %d", Yzy.name, Yzy.age, Yzy.s.math, Yzy.s.chinese, Yzy.s.english);

//     return 0;
// }

// #include <stdio.h>

// struct str1
// {
//     char a;
//     int b;
//     char c;
// }s1;

// struct str2
// {
//     char a;
//     char c;
//     int b;
// }s2;

// struct str3
// {
//     char a;
//     double c;
//     int b;
// } s3;

// struct str4
// {
//     struct str3 s3;
//     double c;
//     int b;
// } s4;

// //请问上述结构体在内存里占用多少内存？？

// int main()
// {
//     printf("%d\n", sizeof(s1));
//     //输出结果是12
//     printf("%d\n", sizeof(s2));
//     //输出结果是8
//     printf("%d\n", sizeof(s3));
//     //输出结果是24
//     printf("%d\n", sizeof(s4));
//     //输出结果是40

//     return 0;
// }
//     //思考为何这个地方不是单纯的直接相加就行了呢？？
//     //又是怎么算的呢？
//     //@ 一共有四个规则
//     //~ 1.0首先他会要一块内存，然后从偏移量为0的地方开始放一个元素，偏移量就类似于它把他放内存的起始点设为零，其余地方就叫偏移，偏移了多少就是偏移量
//     //~ 第一个元素从0偏移量开始。
//     //~ 接下来每一个元素都需要进行处理，有一个叫对齐数的定义，vs默认值是8，每一个元素有几个字节就是多少对齐数，规则就是与默认值比较用最小值
//     //~ 2.0选出最小值就需要进行下一步规则，第一个元素从偏移量为0的内存块放值，下一个元素必须从其处理出的对齐数的整数倍数位置开始再放
//     //解释一下，比如s1，char字节就是1和8比较1更小就用一把占用一个字节，把偏移量为0的那一块内存占用，之后从偏移量为1的内存块开始数，由于是
//     //int型，字节数是4，和8比4更小，但是按照规则需要放在偏移量为4或4的倍数位置的内存块开始放，也就是说偏移量为1，2，3这三个字节的内存块不放值
//     //知道偏移量为4的这一个内存块开始放值，占四个字节就是用到偏移量为7的内存块，然后到第三个元素就是char按理说用一个字节就行，也不需要跳过
//     //但是为啥是12呢，按照上面的算法应该是9呀？？？，为何是九你从偏移量为0的地方算起占到第八块一共就是九个字节
//     //~ 3.0这就需要规则三，最后需要判断整个结构体占有的内存必须是整个结构体中所使用的最大对齐数的整数倍，所以需要往后扩展是三个字节到偏移量为11
//     //~ 这个内存块，一共就是12个字节
//     //同理判断s2s3，s2 0 1 4，分别从这几个偏移量位置开始放值最后放到偏移量为7的（放了），一共正好是8字节是4的倍数就不会往后扩
//     //s3 0 8 16 放完int到偏移量为19的位置也就是20个字节，不是最大对齐数8的倍数往后扩展到24
//     //~ 4.0嵌套结构体怎么算呢，要用到规则四，s3占了24字节还是要用24个字节，就是说到了如何处理结构体对齐数？规则就是按照你所嵌套的结构体的最大
//     //~ 对齐数与默认值比较，从0开始放放到偏移量为23的位置正好double是8，从24开始放放到31，正好又从32开始放int放到35，一共是36个字节。
//     //~ 4.1最后判断是否扩展的时候，嵌套的结构体也是按照其之中的最大对齐数与现在的结构体的所有元素相比较，选出最大对齐数，然后判断倍数
//     //36不是8的倍数，自动扩展到40，即40个字节

//     //！那么问题来了为何要这么做呢？学会算之后思考为何要这样设计呢？？
//     //~理论说法
//     //1.0平台原因（移植原因）
//     //不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处去取某些特定类型的数据，否则会抛出硬件异常；
//     //2.0性能原因
//     //数据结构尤其是栈应尽可能的在自然边界上对齐，原因在于为了访问未对齐的内存，处理器需要作两次内存访问，而对齐的内存访问仅需要一次访问。
//     //~个人理解
//     //所谓对齐你仔细体会，这个规则的制订就是尽可能的划分好块以免出现读一半需要再读一遍的情况，它是牺牲内存换取时间的行为。

// #include <stdio.h>

// struct str1
// {
//     int arr1[100];
//     int a;
// };

// struct str2
// {
//     int arr1[100];
//     int a;
// };

// void print1(struct str1 s1,int num); //！注意要把结构体放在最前面，要不然你后面调用函数函数里面不知的结构体的名字
// void print2(struct str2 *p, int num); // ！结构体指针的效率要高于直接传一个大结构体过去

// int main()
// {
//     struct str1 s1 = {{
//                           1,
//                           2,
//                           3,
//                           4,
//                           5,
//                       },
//                       991};

//     struct str2 s2 = {{
//                           2,
//                           3,
//                           3,
//                           4,
//                           5,
//                       },
//                       919};

//     print1(s1,10);
//     print2(&s2, 10);//~另外说一句这个是真爽vscode，插件给你显示的清清楚楚哈哈哈哈

//     return 0;
// }

// void print1(struct str1 s1,int num)
// {
//     for (int i = 0; i < num;i++)
//     {
//         printf("%d ", s1.arr1[i]);

//     }
//     printf("%d \n", s1.a);
// }

// void print2(struct str2 *p,int num)
// {
//     for (int i = 0; i < num;i++)
//     {
//         printf("%d ", p->arr1[i]); //~结构体指针p指向结构体s2，用箭头->来访问
//     }
//     printf("%d \n", p->a);
// }

// 董小姐 莉莉安 安河桥 郭源潮 斑马斑马 鸽子 关忆北 空港曲 六层楼
// 飞去南方只是为了回家明天太远今天太短，给得了未来，他们在别有用心的生活里偏偏舞蹈，长生不老，
// 我的余生却再也没有北方
// 听会我喜欢的歌有何不可呢？？？我又梦见你还站在门口一脸羞涩的表情，你说这么多年，你可知道你的名字解释了我的一生，我的余生却再也没有北方
// 你知道你的名字解释了我的一生。
// 戏子与警察又念起诗篇，你我登船，高堂，咸鱼牛马杀人刀，月色不过对影三人，忘记真相但愿。
// 可春色啊宛若江南岸，垂死与度量，忘记真相但愿病重的医生
// 但愿谁都不在意

// 枚举
// 就是把生活中可以列举，递增的量来具体化
//  #include <stdio.h>
//  enum Day
//  {
//    ,
//  }
//  int main()
//  {

//     return 0;
// }

// 枚举enum

// 联合叫共用体更为贴切 union
// 联合也存在对齐，联合是共用
// 创建出来就是共用的单一使用，用法和结构体类似，自定义类型有类型名有自身定义的名字，有元素变量名也用union.a
// 存放地址是小端存放，从低地址到高地址

// 动态内存管理
// 四个函数
// malloc
// stdlib.h
// calloc//两个参数会初始化

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <errno.h>
// #include <assert.h>

// int main()
// {
//     int *p = NULL;
//     int *ptr = NULL;
//     ptr = (int*)realloc(p, 40);
//     if(ptr!=NULL)
//     {
//         p = ptr;
//     }
//     // if(p==NULL)
//     // {
//     //     printf("%s", strerror(errno));
//     //     // return 1;
//     //     exit(1);//?
//     // }
//     ptr=(int*)realloc(p, 8000);
//     if(ptr != NULL)
//     {
//         p = ptr;
//     }
//     for (int i = 0; i < 10;i++)
//     {
//         p[i] = i;
//     }
//     for (int i = 0; i < 10;i++)
//     {
//         printf("%d ", p[i]);
//     }
//     free(p);
//     p = NULL;
//     ptr = NULL;

//     return 0;
// }
// #include <stdio.h>

// //柔性数组
// struct s
// {
//     int n;
//     int arr[];
// };

// struct ss
// {
//     int m;
//     int arr[0];
// };

// //两种方式
// //前面必须有元素最后一个放数组，
// //sizeof不算如柔性数组的值
// //怎么用，需要malloc函数
// int main()
// {
//     struct s *ps = (struct s *)malloc((sizeof(struct s) + 40));
//     if(ps==NULL)
//     {
//         return 1;
//     }
//     ps->n = 100;
//     for (int i = 0; i < 10;i++)
//     {
//         ps->arr[i] = i;
//     }
//     for (int i = 0; i < 10;i++)
//     {
//         printf("%d ", ps->arr[i]);
//     }
//     struct s *ptr = realloc(ps, (sizeof(struct s *) + 80));
//     if(ptr!=NULL)
//     {
//         ps = ptr;
//         ptr = NULL;
//     }

//     //然后就可以使用了，更大的空间柔性数组，动态内存管理

//     free(ps);
//     ps = NULL;
//     return 0;
// }
// //必须是最后一个成员
// //malloc次数越多内存碎片的可能性就越多，降低内存利用率

// 文件
// 文件打开fopen
// 文件关闭fclose
// FILE是一个结构体 ，在编译器内部已经声明好了，用typedef定义的一种结构体类型，具体细节不需要我们管，并且什么编译运行程序系统会自动产生一个文件信息区，来存放这个文件的信息。这个不需要太懂，了解即可会用就行。
// fopen函数
//  FILE*是一种指针
// “r”“w”“a”读写追加。
//  打开失败会返回一个空指针
// 也可以用显示报错信息的那个东东
// 要在那个代码的文件夹里面
// 要不然就需要复制地址。
// 注意要关闭文件，不关有可能丢信息
// fgetc读 fputc写单个字符
// fgets读 fputs写字符串
// 写文件的时候如果文件里面有内容的话就会销毁，然后重新写内容，如果要保留应该用“a”
// 在fopen的时候内容就清掉了
// fgets是从文件中读取信息，需要自己创建char数组来承载从文件中读到的信息，第一个参数是字符数组型指针，第二个参数是读取的最大数（num）并且最后一位是\0，  没读完直接截断。 第三个参数就是文件指针
// 新的报错方式perror（）会自动帮你打印错误信息，比原来用的简单，里面可以放字符串 它相当于上述的结合体，即拿到错位信息又将它打印出来，strerror（errno）只是单单拿到错误信息，而printf才是实现打印的功能
// 往文件里写是fprintf，就相当于打印在文件里，便于理解，信息从内存往外流进入文件叫输出
// 往文件外读是fscanf，就相当于不是从键盘里面读取信息，而是从文件里面读取信息。然后存到地址里 ，信息从文件进入到内存就叫，输入，以计算机为主体

// ！好的学习方式视频在右，编译器，笔记在左，边听边记，记重点记框架

// 从内存到外部设备，信息是如何传递的呢，中间存在一种东东叫流，作为一种中间传递的方式，因为外设很多，鼠标，键盘，光盘，u盘等等，为了说方便程序员输入输出，采用中间数据流的传递方式，要不然程序员每连接一种外设，就要学习一种输入输出方式。你把信息穿给流，底层逻辑自己会帮你传输信息给外设。

// 那么我们思考，为何你打开文件，从文件读取或者存入信息需要FILE*呢？？
// 而你从键盘读取信息，从屏幕输出信息没有 键盘*， 屏幕*呢？？？
// 是因为任何一个c语言程序会默认打开三个流
// 1.stdin-标准输入流对应键盘
// 2.stdout-标准输出流对应屏幕
// 3.stderr-标准错误流对应屏幕
// 而对应文件你没有默认打开的流帮助你传递信息，所以需要FILE*指针
//  注意到fprintf是适用于所有输入流的，那么我们思考能不能用fprintf把信息输出到屏幕上，答案是当然可以，需要你把前面的文件指针换成stdout，类似于用标准输出流??,而你给文件指针,就是打开文件流.fscanf,fgets,fgetc等等都是适合所有流,也就是只要你想可以给任何外设进行输入和输出.
// 只有两个函数特殊,fread,二进制输入,fwrite,二进制输出.是只能对文件的.
// 打开关闭
// printf,

//~有点浮躁,想赶快开始新的,坚持住aaa


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h> 

int main()
{
    FILE *pFileText = fopen("text.txt", "w");
    if(pFileText==NULL)
    {
        perror("fopen:");
        //做三个错误判断的方式
    }
    if(pFileText==NULL)
    {
        printf("%s", strerror(errno));
        return 1;//不是单一出口
    }
    if(pFileText==NULL)
    {
        exit(1);
        //是不是还可以做一个assert
    }

    fprintf(pFileText, "%s", "Hello World!");

    fclose("text.txt");
    return 0;
}