#define _CRT_SECURE_NO_WARNINGS

目录：
    {
         1.typedef 类型定义
         2.static 静态本地变量
         3.宏的使用方法以及原则
         4.一些快捷键的使用（超级有用）！！！
         5.多文件的处理
         6.格式化输出 printf scanf 
         7.写出优质代码----const以及assert
         8.如何使用Github，如何在vscode上提交代码
         9.指针进阶-1.0版本--指针与数组
        10.指针进阶--2.0版本--指针与函数
        11.字符串函数合集 //@ <string.h>
    }



1.typedef 类型定义
{
    typedef int Length;

    Length a = 10;
    Length b[10];
    //这个的意思是用Length来可以直接代替int；

    typedef struct 
    {
        int mouth;
        int day;
        int year;
    }Date;

    Date today = {12, 15, 2023};
}


2.static 静态本地变量
{
    #include <stdio.h>

    int a = 12;   //全局变量

    int b(int, int);

    int main()
    {
        b(a, a);

        printf("%d", c);   //在下面定义了static int c，它的作用域是b函数里面，但是它的生存域是全局
        //这个地方是要报错的，因为c在main函数里面并不存在
        c = 1;
        
        return 0;
    }

    int b(int ,int )
    {
        static int c = 10;  //静态全局变量
    }

}


3.宏的使用方法以及原则
{
    #define NUMBER 100
    //它所做的只是纯文本替换，把你后续函数中的每一个出现的NUMBER，单纯的替换为100，这个叫程序的预处理；


    #define code(x) ((x)*(x)*(x))
    // 它也可以这么用，可以替代函数直接使用，在函数运行中是直接把它替换成((x)*(x)*(x))这个，可以自己输入，也可以在括号里面做运算，都可以就像定义一个<math.h>头文件，然后再用code（x，y）一样

  
    #define MAX(a,b) ( ( a > b) ? a : b )
    //这也是常见的一种方式
    //可以MAX(MAX(a，b)，c)；
    需要注意的点是
                1.不能加分号在语句末尾
                2.尽可能多的加括号
    // 如果说你少加了括号 #define A(x) (x)+(x)+(x)
    // 你在main函数中写一句
    // A（5）* 10；
    // 运行的结果是（5）+（5）+（5）* 10
    // 也就是（5）+（5）+（（5）* 10）
                3.可以宏嵌套
}


4.一些快捷键的使用（超级有用）！！！
{
    CTRL  + L 选择整行

    CTRL  + X 删除整行应该叫剪切，带有复制

    ALT   + UP / DOWN 移动选中的行

    CTRL  + ENTER 光标在任意位置换行

    CTRL  + / 注释选中和删除选中

    CTRL  + B 隐藏左侧目录栏

    CTRL  + J 隐藏终端

    SHIFT + ALT + UP/DOWN  复制当前行向上/向下

    CTRL  + Z  回退操作

    CTRL  + SHIFT + [  折叠

    CTRL  + SHIFT + ]  展开

    //CTRL  + ;  （自己修改的）直接移动光标至行末

    //CTRL  + ''  (不用加shift也是自己修改) 与之对应是直接移动光标至行头

    老报错就直接注释了
}


5.多文件的处理
{
    !!!!!一定切记不能用中文！！！！！
    //如同刚开始使用 vscode 的一样，可以创建属于自己的（xxx.h）注意这里是函数声明，里面就放一句声明即可。
    //然后使用xxx.c里面就可以放函数的定义，然后可以在main（）函数里面直接进行调用，另外要注意的点是说，在main（）函数里面需要
    //#include “xxx.h” ,如同开始使用<stdio.h>一样的，用<>这个玩意是编译器带的库，用“”是自己定义的函数，

    当你需要使用全局变量在所有.c文件时，就需要在你的xxx.h那个自己创建的头文件，属于自己的库里面进行全局变量声明 
    extern int a;  还是一样这里是声明，不能定义不能给它赋值，这个叫变量声明
    int b = 1;  这个叫变量定义

    为了避免重复的声明和定义因为会在不同的头文件里进一步引用原来的头文件，就会导致重复定义和声明，就需要标准头文件结构
    #ifndef __LIST(名字)_HEAD__
    #define __LIST_HEAD__
    ...
    #endif
    
}


6.格式化输出 printf  scanf
{
    //%【】【】【】【】type
        1.// 第一块是可以放-左对齐，+在前面加一个+，0是在前面自动补零, 一个空格是自动补空（4种）
        2. // 第二，三块是number这个是一共输出几个格，.number是小数点后面有几位，eg.%9.2d的意思是一共有九个格子，小数点后有两位
        // 比较特殊的用法就是%*d这个东东，则需要传两个参数如printf（“%*d”，len，a），如此就可以放变量在输出里面十分方便 .*同理
        3. // 第四块用的少如%hhd，就是说一单字节输出，这个数字的最低为取单一个字节输出。
        4. // type 常见的%d，%f，%p，%s，%c，%o，%x，%i（也可以输出整数），比较特殊的一个%n，这个东东是类似一个计数器，你需要先定义一个
        // eg.  int num;
        // printf("%d%n",12345,&num);
        // pritnf("%d",num);
        // 它的输出结果是5，num会数出你printf输出了几个格子然后存放在地址为&num的内存块里面
        //%【】type  scanf
        1. // 第一块里面比较特殊的%*d，scanf("%*d%d",&num);如果你输入123 456 scanf就会跳过123 然后读入456；
        2.//type里面  %i的意思是范围更广的数字，可以读入八进制十六进制或者十进制都可以，
}


7.写出优质代码--const and assert 
{
    //首先assert的用法
    #include <assert.h>
    int main()
    {
        assert();
        //这里面可以放一些你想判断的表达式，比如你想运行这个模块，但是嘞为了防止传进来的值出错，就可以在前面放assert（*p!=NULL）；防止说指针一不小心传进来的值是一个空指针；这只是一个例子，充分发挥你的想象力吧！
    }

    #include <stdio.h>
    int main()
    {
        int a = 0;
        int b = 0;

        // First
        // 1.const int *p = &a;
        // or int const *p =&a;
        // 上述两种情况是一样的，你可以去修改p，即指针变量的值，但是你不能通过*p来改a的值，个人目前能想到的用法就是说用来for循环输出值而不改变值，以及在进行传参时进入函数不让函数改你外面的值（这个地方仔细想想，你用const char *p 这样作为函数传参进函数，你不希望外面的数组被你这个函数而改值，所以加一个const，如何理解，比如说你用一个for循环遍历干事，这个p指针，遍历你外面的数组，你加了一个const，就相当于给p上了一个锁说不能改变值，但是你可以移动你可以指向其他的对象）
        //你不能通过指针来修改值，但是可以让它指向别的变量；
        // Second
        // 2.int *const p = &b;
        // 这种情况就是说p这个指针只所属于b这个变量，不能让他指向别人，你可以通过指针来修改b的值
    }
}


8.如何使用Github，如何在vscode上提交代码
{
    12-18-2023 
    //成功解锁Github同时，大概知道说怎么从头到尾的开始。
    //理顺一个项目（或者说在Github上开一个库），然后实现自己的代码管理

    现在讲解流程
    {
        1.首先在Github上先创建一个库（或者叫项目），就比如说我要创建一个三子棋的一个项目，创建完了之后呢，复制Https地址
        2.在D盘的code目录下，右键鼠标，找到Git clone，单击之后自动会将地址放上去直接点ok即可，他就出现了一个文件夹，就是你刚刚在Github上
        创建的库，（注意要勾选README.md这个东东相当于说明书）
        3.然后嘞需要在vscode上打开，这里应该分为两种，第一种就是说做新项目吧，稍微大一点的项目,一种方式就是直接在C language learning下面新
        建一个文件夹直接用就行，如果说我想重新开一个库，那就需要走1.2.步骤创建然后克隆然后需要重新配置一个c的环境可以直接复制（Once）C这个文件
        // 夹中的.vscode这个文件，当然好像也没啥必要直接用这个 c language learning 就行了免得麻烦。作完上面之后，一个新的库就做完了，你就可以开始新的c的大项目了。然后要重开一个工作台，因为原来时c language learning的工作台（再点一下vscode，选择新的文件夹就行了），开编即可。
        //4.如果说学习新的语言C++之后，最开始还是要创建一个库在Github上，然后复制地址然后克隆到code这个文件夹，开新的工作台，这就需要重新安装c++的环境了。
        //这里我思考了一下vscode的好处，提交很方便，每天编完了之后直接提交上去点一下提交即可就上去了，有点麻烦的一点就是当你新建项目的时候，需要重新配置一下环境然后选择文件夹打开开编，但是小项目直接在learning里面做很方便，大项目时间长的话，开头这一下弄完一劳永逸是不是，后面提交嘎嘎爽。
        //这里老报错就直接注释了。。。


        //另外要说的一点是我还不太会创建分支，这个玩意还不太会，现在还用不太上，慢慢来吧
    }
}


9.指针进阶--1.0版本--指针与数组
{
    //@ 目录 指针数组-数组指针-对数组名的探究分为一维数组和二维数组-以及数组指针数组（可以无限套娃哈哈哈）

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
//
//     int *parry[] = {arr1, arr2, arr3};
//
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
//
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
//
//     printf("%p\n", arr+1);
//     printf("%p\n", &arr[0]+1);
//     printf("%p\n", &arr+1);
//
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
//
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
//
//     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//     {
//         // printf("%d ", *p[i]); //err
//         // printf("%d ", *p); //err
//         // printf("%d ", (*p)[i]); //right
//         printf("%d ", *(*p+i)); //right
//         //p是行地址，是指向整个数组的地址指向这一行，就如同arr加一个&arr，从列地址，即指向单一数据的转为行地址
//         //指向整个数组，&是列转行，*就是行转列，就是让p从指向一整行的地址转为指向单一数据
//         //*p=arr，p=&arr
//      //确定这个之后再去思考如何去打印输出你想要的值，移动即可，注意我在这个地方还进行了一个优先级测试，*p[i]是错的，先衔接下标也就是直接动了
//         //一整个数组的值然后输出后面的值了
//         //应该让*p先结合来代表arr，借助arr来思考会好一点然后arr[i]去输出每一个值
//      //数组指针在一维数组上有点画蛇添足，很变扭，非要&arr地址，还要加一堆东西才能完成输出确实很变扭，但是说，数组指针真正用到的地方是2维数组
//         //三维数组上。就如同我对&，和*作用的理解上，是基于二维数组来进行的，如果说一维数组，这个作用似乎不能这么理解对吧。
//     }
//
//         return 0;
// }

// // 具体应用场景
// #include <stdio.h>
//
//     void print1(int arrat[3][5], int row, int col);
//
//     void print2(int(*p)[5], int row, int col);
//
//     int main()
//     {
//         int array[3][5] = {
//             1,
//             2,
//             3,
//             4,
//             5,
//             6,
//             7,
//             8,
//             9,
//             10,
//             11,
//             12,
//             13,
//             14,
//             15,
//         };
//
//         print1(array, 3, 5);
//
//         print2(array, 3, 5);
// 
//         return 0;
//     }
// 
//     void print1(int array[3][5], int row, int col)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 printf("%2d\t", array[i][j]);
//             }
// 
//             printf("\n");
//         }
//     }
//
//     void print2(int(*p)[5], int row, int col)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < col; j++)
//             {
//                 printf("%2d\t", *(*(p + i) + j));
//                 // printf("%2d\t",*(*(array+i)+j));
//                 // array   是二维数组的首元素的地址也就是编号为第零行的地址&array[0]
//                 // array[i]是一维数组的首元素地址也就是&array[0][0]
//                 // array[0][0]就已经是值了
//                 // printf("%2d\t",*(array[i]+j));
//                 // 同样类比
//                 // p是指针变量，是指向一维数组的指针变量，即数组指针
//                 // p=array=&array[0]=& *（array+0）
//                 // 这就是下标在编译器中的真正处理方式
//                 // 理论上说* &是一对可以抵消，& []也同样是一对可以抵消
//                 printf("%2d\t", *(p[i] + j));
//             }
//
//             printf("\n");
//         }
//     }
//
//     // 总结
//     //{
//     // 问如下是什么东东
//     // 1.int array[5];
//     // 2.int *parray[5];
//     // 3.int (*parray)[5];
//     // 前三很简单，主要是第四个
//     // 4.int (*parray[10])[5];  --首先把parray[10]拿掉就是 int (* )[5]这是什么东东，数组指针，但是呢变量名是parray[10]
//     // 也就是说是一个数组指针的数组，里面有十个指向《整型数组且整型数组中元素个数为5》的（数组）指针，
//     //}
}


10.指针进阶--2.0版本--指针与函数
{#pragma region

    {//初探指针函数
        #include <stdio.h>

        int Add(int, int);

        int main(void)
        {
            int temp = 0;
            int (*p)(int, int) = &Add;
            // or int (*p)(int, int) = Add;
            // 无论用&Add或者是用Add都是函数的地址加不加，都是地址
            // so 你会想有啥用呢？？？
            // 咋用呢？？

            int ret = (*p)(5, 6);
            // or int ret = p(5, 6);
            // or int ret = (**********p)(5, 6);
            // 这三种方式都可调用函数，第一种正常很好理解，那单p（int，int）为啥能用呢？？
            // 就和Add一样，p=&Add，*p=Add，对不对，那这俩都是地址你说呢？
            // （****）就是摆设（*p）便于你理解

            temp = Add(2, 3);

            // printf("%d %d \n", temp, ret);
            // printf("%p %p \n", Add, &Add);
            // printf("%p %p \n", *Add, &*Add);
            // printf("%p %p \n", *p, *****p);

            老报错就直接注释了

            // 这个地方就可以看出Add与&Add是一样的
            // 无论如何这个地方随你怎么取地址怎么解引用地址都是这个值

            // return 0;
        }

        int Add(int a, int b)
        {
            return (a + b);
        }
    }

    {#pragma region// 再探指针函数
        {//版本一---没有明显问题但是很冗杂在case那个地方
            #include <stdio.h>

            void Menu();

            void Add(int, int);
            void Sub(int, int);
            void Mul(int, int);
            void Div(int, int);

            // void Cal(int (*p)(int, int));

            int main(void)
            {
                int input = 0;
                int x = 0;
                int y = 0;

                do
                {
                    Menu();

                    printf("请选择>:");
                    scanf("%d", &input); // 加&&&&&&&&&&！！！！！！
                    switch (input)
                    {
                    case 0:
                        printf("退出计算器\n");
                        break;
                    case 1:
                        printf("请输入两个操作数>:");
                        scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

                        Add(x,y);
                        break;
                    case 2:
                        printf("请输入两个操作数>:");
                        scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

                        Sub(x,y);
                        break;
            //@这个地方老报错就注释了
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
                    }
                } while (input);

            //     return 0;
            }

            void Menu()
            {
                printf("*******************************\n");
                printf("*****   1.Add    2.Sub  *******\n");
                printf("*****   3.Mul    4.Div  *******\n");
                printf("*****        0.exit     *******\n");
                printf("*******************************\n");
            }

            void Add(int x, int y)
            {
                printf("%d\n", x + y);
            }

            void Sub(int x, int y)
            {
                printf("%d\n", x - y);
            }

            void Mul(int x, int y)
            {
                printf("%d\n", x * y);
            }

            void Div(int x, int y)
            {
                printf("%d\n", x / y);
            }
        }

        //？ 那么这时候就想问了，函数指针有啥用的呢，该咋用呢？？？
        //！ show time

        {// 版本二---函数指针的实际用处
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
        }
    
    #pragma endregion}

    {#pragma region //初探函数指针数组

        //版本三---函数指针数组--转换表
        // 函数指针的数组
        // 转换表

        //？目的是，如果说我想加新功能，加十个加15个那你case要写十五个吗？
        //！接下来就要用到函数指针数组
        #include <stdio.h>

        #define NUMBER 5
        //未来大一点的项目就可以建一个新文件夹，然后把声明都放进.h里面，然后定义放game.c里面，再放一个test.c装这个就行咯

        void Menu();

        void Add(int, int);
        void Sub(int, int);
        void Mul(int, int);
        void Div(int, int);

        void Cal(int (*p)(int, int));

        int main(void)
        {
            int input = 0;
            int x = 0;
            int y = 0;

            void (*(parray[NUMBER]))(int, int) = {
                0,
                Add,
                Sub,
                Mul,
                Div,
            };

            do
            {
                Menu();

                printf("请选择>:");
                scanf("%d", &input);

                if(input==0)
                {
                    printf("退出计算机 \n");
                }
                else if (input >= 1 && input <= NUMBER)
                {
                    int x = 0;
                    int y = 0;

                    printf("请输入两个操作数>:");
                    scanf("%d %d", &x, &y);
                    //很巧妙的是在前面加了一个零，你输入input直接就可以作为数字进去代表函数，如果没有的话就减一就行

                    parray[input](x, y);
                    // parray[1]=Add,parray[1](x,y)=Add(x,y)
                }
                else
                {
                    printf("请重新输入 \n");
                }

            } while (input);
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

            return 0;
        }

        void Menu()
        {
            printf("*******************************\n");
            printf("*****   1.Add    2.Sub  *******\n");
            printf("*****   3.Mul    4.Div  *******\n");
            printf("*****        0.exit     *******\n");
            printf("*******************************\n");
        }

        void Add(int x, int y)
        {
            printf("%d\n", x + y);
        }

        void Sub(int x, int y)
        {
            printf("%d\n", x - y);
        }

        void Mul(int x, int y)
        {
            printf("%d\n", x * y);
        }

        void Div(int x, int y)
        {
            printf("%d\n", x / y);
        }

        void Cal(int (*p)(int x, int y))
        {
            int x = 0;
            int y = 0;

            printf("请输入两个操作数>:");
            scanf("%d %d", &x, &y); // 加&&&&&&&&&&&&！！！！！

            (*p)(x, y);
        }

        // @ 总结 归纳 复习
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
        #pragma endregion } 

    {// 初探回调函数-排序预习

        // 先复习一下排序
        //@1.冒泡排序
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

        //@2.选择排序
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
    }

    {#pragma region//理解回调函数-qsort函数的用法

        // void* 这个东东
        // void*可以装地址，常用在函数指针里面传过来一个不确定的类型的地址过来
        // 但是 void *p;这个东西就只能是用来承载地址，不能对它解引用也不能对它进行加减运算，为啥，没类型系统都不知道怎么动

            // qsort这个库函数类型的用法
            #include <stdio.h>
            #include <stdlib.h>
            // void qsort(void *base, size_t num, size_t width, int (*cmp)(const void *e1, const void *e2));

            // 这是它的标准声明
            //  void *base,给数组地址，要排序的东西的首元素地址
            //  size_t num,给你要排几个元素  sizeof(arr)/sizeof(arr[0])
            //  size_t width, 每一个元素的大小，由于类型不确定，你需要给出每一个元素的大小  sizeof(arr[0])
            //  int (*cmp)(const void *e1, const void *e2)，关键点就在这里，也是这个库函数的精髓，就是你指定排序的规则（自己再做一个函数）
            //  然后把函数地址传给这个库函数让它帮你完成快速排序
            //  对其解释，为何用它，注意他都是void*，也就是你可以比较任何类型的数据，按照你想要的排序规则，这个库函数来帮你按照你的规则排序出你想要的类型

            int cmp_int(const void *e1, const void *e2);
            // Name is cmp_int,it is main that this is a int sort;
            void printSort(int array[], int sz);

            int main()
            {
                int arr[10] = {
                    0,
                    1,
                    2,
                    3,
                    4,
                    5,
                    6,
                    7,
                    8,
                    9,
                };

                qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);
                printSort(arr, sizeof(arr) / sizeof(arr[0]));

                return 0;
            }

            // 版本一
            //  int (*cmp_int)(const void *e1, const void *e2)
            //  {
            // 库函数对这个你指定规则的函数的返回值有要求，如何理解呢？你要实现排序，脱离出int类型排序的思维体系，int型就只有一个数比另一个数大或小或等于
            // 但是请注意别的型呢？比如你要排序一个结构体数组，这里面有十个人的姓名学号分数等等，它比较先后的规则就是你指定的，但是他要返回值给库函数，让电脑
            // 知道奥这个比那个大
            // 规则就是如果大就返回>0的数，小于就返回<0的数，相等就返回0
            // if(*e1>*e2)
            // error 注意要强转
            //      if(*(int*)e1>*(int*)e2)
            //          return 1;
            //      if(*(int*)e2>*(int*)e1)
            //          return -1;
            //      else
            //          return 0;

            // }

            // 版本二

            int cmp_int(const void *e1, const void *e2)
            {
                return *(int *)e2 - *(int *)e1;
            }

            void printSort(int arr[], int sz)
            {
                for (int i = 0; i < sz; i++)
                {
                    printf("%d ", arr[i]);
                }
            }

            // 注意sizeof的用法
            // int a[5];
            // sizeof(a),只要是数组名单独用就是代表整体的
            // int a[3][5]
            // sizeof(a),就是3*5*4
            // sizeof(a[0]),就是5*4，就是这一行，如果单拿出来（或者说除sizeof其余情况）a[0]就是首元素地址就是指向a[0][0],  不是行指针，此时的a是行指针
    #pragma endregion}


#pragma endregion}


11.字符串函数合集 //@ <string.h>
{
    { //@ strlen
      // 首先这是一个计算字符串长度的库函数包含在<string.h>之中
      // ！ size_t strlen ( const char * str );
      // 这是它的标准声明，返回值是无符号整型unsigned int ，传进去的就是地址，你可以直接双引号给一个字符串在它的括号里面
      // 同样也可以传一个字符数组进去
      //~ 1.结束
      // 书接上文，需要注意的是字符串的最后会加一个‘\0’，而字符数组是不会的，字符数组有几个就是几个，当你把字符串放在括号里面就是
      // 算出字符串中除去‘\0’的其他字符的数量。而当你把字符数组传进去的时候，//！strlen函数结束的标志是'\0'
      // 你把字符数组传进去，你要的那块内存里面是没有‘\0’，也就是说它会自动往后延续，当遇到内存内容是0的才会结束，也就是说当你
      // 字符数组传进去会出现一个大于等于你这个字符数组的大小的随机数
      //~ 2.size_t无符号
      // size_t是typedf define is unsigned int,它传回来的值是无符号整型也就是比如说你让strlen（“abc”）-strlen
      // （“abcdef”）减出来的值，如果是整型就是3-6=-3但是它是无符号整型3-6就是一个很大的数补码，也就是不能这么直接减
      // 那么我们怎么用呢？？ 直接比较就行if(strlen（“abc”）>strlen（“abcdef”）)
      //if(strlen（“abc”）-strlen（“abcdef”）)可不行啊，它的结果就是一个很大的数
      //~ 3.拓展一下字符串和字符数组的区别联系一下sizeof与strlen
      // 你给sizeof传进去一个字符串比如“abcdef”结果是7，strlen就是6，你给他传进去字符数组char arr[5],sizeof(arr)就是5
      //而你传给strlen一个字符数组结果是大于等于5，是一个随机值。
      //~ 这个地方还可以展开说你忘sizeof里面放arr，arr[0]，*arr，&arr and so on..(上面有讲)(屏幕截图里面有存典例习题)
    }

    { //@ strcpy
      //~ Introduction(前言)
      // Take notes in English haha~~
      // ！char *strcpy(char *destination, const char *source);
      // 这个函数是实现字符串复制，复制包括了'\0'。
      // 需要注意的点 1.注意复制字符串的长度，它不具有判断是否会溢出，长度不够的情况，所以作为coder你需要自己注意字符串长度
      //            2.第一个地址是destination，即目的地，第二个地址是source，即来源。
      //            3.返回值是一个char*型的地址，是destination的地址
      //~ 1.End flag(结束标志)
      // 结束标志是'\0'，字符串它自动加一个结束标志'\0'，如果说你传过去的字符串中间有'\0',他就不能复制后面的内容了
      // 如果说你想把字符数组放进去复制，需要注意，字符数组不会自动加'\0'，你用之前要么自己加，否则就会出现问题，因为这个函数
      // 只会看到'\0'停止，如果说你传字符数组进去就如同和上面计算长度函数一样，它会往后走，直到看到0，也就是字符的'\0'。
      //~ 2.char*返回值
      //返回值返回的是destination但是，你在指针复制的时候已经动了指针了所以你需要创建一个临时指针变量char*ret
      //来承载你要返回的destination的地址
      //~ 3.Try to realize it yourself(自己尝试实现)
      {
        #include <stdio.h>
        #include <string.h>
        #include <assert.h>

          char *myStrcpy(char *destination, const char *source);

          int main()
          {
              char arr1[20] = {'a', 'b', 'c', 'd', 'e', '\0'};
              char arr2[20] = "Hello world!";
              char *parr = "abcdef";

              strcpy(arr1, arr2); //~right
              // strcpy(arr2, arr1);  //！err
              // 虽然说运行结果好像没啥问题但是说这个在别的编译器上是有问题的怎么理解
              // 你把一复制过去，但是1里面是没有'\0'的，它按理说不知道怎么停但是是这个编译器牛逼可以自动帮你补
              // strcpy(parr, arr2);  //！err
              // 没有字符串变量，这个字符串你创建了就是就是这么多你不能改,它叫字符串常量自然也就不能更改。你把他存进数组里你可以改字符数组里
              // 面的元素，在打印数组，你那个字符串还是在哪里的。
              char arr3[20] = {0};
              myStrcpy(arr3, arr1);
              // vs真他妈舒服我靠
              printf("%s\n", arr3);
              printf("%s\n", arr1);

              return 0;
          }

          char *myStrcpy(char *destination, const char *source)
          {
              assert(destination && source);
              char *ret = destination;
              // easy
              //  assert(destination != NULL);
              //  assert(source != NULL);
              do
              {
                  /* code */
                  *destination++ = *source++;

              } while (*source != '\0');

              return ret;
          }
      }
    }

    { //@ strcat
      // 叫字符串追加
      // ！ char *strcat(char *destination, const char *source);
      // char arr1[]="Hello ";
      // strcat(arr1,"world!");
      // 就相当于把先把arr1的destination的指针移到了这个字符串的'\0'处，然后再进行strcpy，
      // 需要注意的点就是数组大小你要控制好，别超了。
    }

    { //@ strcmp
      // ！int strcmp ( const char * str1, const char * str2 );
      //~几个注意点
      //1.一个一个比较“abc”，“abcd”就是第一个小于第二个，一个一个比较，如果是相等就往后移。
      //2.返回值如果比较到了一对字符出现了差别就会判断，大于就会返回一个大于0的值，小于就会返回一个小于0的值
      //3.如果比比比到最后都相等就返回一个0
    }

    { //@ strn...
      // ！int strncmp(const char *str1, const char *str2, size_t num);
      // ！char * strncpy ( char * destination, const char * source, size_t num );
      // ！char * strncat ( char * destination, const char * source, size_t num );
      // 上面都是标准声明，就是后面加一个无符号整数，cmp就是比几个，cat就是接几个，cpy就是拷贝几个
      //~需要注意的地方是strncat这个东东有点特殊的就是，比如说strncat(“Hello\0xxxxxxx”,"world",3);
      // 这个地方我直接放字符串方便但是应该放数组，当指针到\0的地方停开始接字符把wor接上去，w换\0，
      // 然后会自动带一个\0在最后，要不然你数组都停不了
      //~另外strncpy也存在这个问题就是strncpy("Helloxxxxx","world",8);不仅把world带过去
      // 而且还会自动补\0也就是“world\0\0\0xx\0”，
      //~如果是strncpy("Helloxxxxx","world",3);他不会补\0的直接就是“worlloxxxxx”;
    }

    
}