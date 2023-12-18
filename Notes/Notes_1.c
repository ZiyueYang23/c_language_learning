目录：
    {
        1.typedef 类型定义
        2.static 静态本地变量
        3.宏的使用方法以及原则
        4.一些快捷键的使用（超级有用）！！！
        5.多文件的处理
        6.格式化输出 printf scanf 
        7.写出优质代码----const以及assert
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

    CTRL  + X 删除整行

    ALT   + UP / DOWN 移动选中的行

    CTRL  + D 批量更改变量（多按几次）

    CTRL  + ENTER 光标在任意位置换行

    CTRL  + / 注释选中和删除选中

    CTRL  + B 隐藏左侧目录栏

    SHIFT + ALT + UP/DOWN  复制当前行向上/向下

    CTRL  + Z  回退操作
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


