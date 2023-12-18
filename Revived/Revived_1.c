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
// // 2.int *parray[5];
// // 3.int (*parray)[5];
// //前三很简单，主要是第四个
// // 4.int (*parray[10])[5];  --首先把parray[10]拿掉就是 int (* )[5]这是什么东东，数组指针，但是呢变量名是parray[10]
// //也就是说是一个数组指针的数组，里面有十个指向《整型数组且整型数组中元素个数为5》的（数组）指针，
// //}

//函数指针
#include <stdio.h>

int Add(int, int);

int main(void)
{
    int temp = 0;
    int (*p)(int, int) = &Add;
    // or int (*p)(int, int) = Add;
    //无论用&Add或者是用Add都是函数的地址加不加，都是地址
    //so 你会想有啥用呢？？？
    //咋用呢？？

    int ret = (*p)(5, 6);
    // or int ret = p(5, 6);
    // or int ret = (**********p)(5, 6);
    //这三种方式都可调用函数，第一种正常很好理解，那单p（int，int）为啥能用呢？？
    //就和Add一样，p=&Add，*p=Add，对不对，那这俩都是地址你说呢？
    // （****）就是摆设（*p）便于你理解

    temp = Add(2, 3);

    printf("%d %d \n", temp,ret);
    printf("%p %p \n", Add, &Add);
    printf("%p %p \n", *Add, &*Add);
    printf("%p %p \n", *p, *****p);
//这个地方就可以看出Add与&Add是一样的
//无论如何这个地方随你怎么取地址怎么解引用地址都是这个值

    return 0;
}

int Add(int a, int b)
{
    return (a + b);
}


