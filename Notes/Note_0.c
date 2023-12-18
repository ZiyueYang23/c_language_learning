#define _CRT_SECURE_NO_WARNINGS
// 目的是帮助自己记忆一些常用常见的必要代码，务必时常巩固复习

目录：
{
    1.排序问题
    2.指针三个数排序比大小好方法 
    3.让系统随意生成随机数的方法 
    4.逆序输出 
    5.输出素数 
    6.跳出循环的两种方式goto用法以及接力break 
    7.符号函数的用法隔位交换符号的函数如何表示 
    8.整数分解 
    9.辗转相除法 --求最大公约数 
    10.水仙花数 -- -遍历检索 
    11.下三角的九九乘法表 
    12.函数声明应该放在最前面main之外 
    13.数组的集成初始化可以单一给个别数组元素赋值 
    14.素数4.0 
    15.动态内存分配 -- -p =（int *）malloc（number * sizeof（）） free（） 
    16.如果安全使用scanf函数
}



1.排序问题
{
    1.1排序问题 -- -选择排序法（大到小）

        for (int a = 0; a < 9; a++)
    {
        for (int b = 1 + a; b < 10; b++) // 最关键的一步
        {
            if (arr[a] < arr[b]) // 注意这个a与冒泡不同
            {
                int c = arr[a];
                arr[a] = arr[b];
                arr[b] = c;
            }
        }
    }

    1.2排序问题 -- -冒泡排序（小到大）

        for (int a = 0; a < 9; a++)
    {
        for (int b = 0; b < 9 - a; b++) // 两个方法最主要的区别就是这里
        {
            if (arr[b] > arr[b + 1])
            {
                int c = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = c;
            }
        }
    }
}



2.三个数排序问题用指针的妙法
{
    // 此时通过指针p1 p2 p3传来三个地址需要按照大小顺序排序

    if (*p1 > *p2)
        swap(p1, p2);
    if (*p1 > *p3)
        swap(p1, p3);
    if (*p2 > *p3)
        swap(p2, p3);

    // 这个地方需要你好好想想！！！！
    // 如何理解这个地方呢，1与2比，出较小一个会在第一个的位置无论换与不换两者之中最小的的一个会在最左边
    //  然后再与3位置的数比较，会出三个数中
    // 最小的一个出现在1位置，然后再比较剩余两个数的大小！！！
}



3.让系统帮你生成一个随机数的方法
{
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main()
    {
        srand(time(0));
        int numebr = rand() // 在这个地方加个%100就直接保留后两位;
                            // 这个生成的随机数是很大的可以通过%100把这个数限制在0-100以内这个还是很有用的
    }

    ////补充对整数的分解

    number % 10 -- --目的是留个位 number / 10 -- --目的是去个位 其他 % 100 or / 100 同理

                                                                                     // 其他用法
                                                                                      比如说要表示时间告诉你有多少t是min 输出几小时几分钟 t /
                                                                                  60 = 几小时，t % 60 = 几分钟 // 挺巧妙
                                                                                  这玩意灵活运用
}



4.逆序输出
{
    4.1单个输出 int number = 12345;
    int digit = 0;

    while (number)
    {
        digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }

    4.2整个输出 int number = 12345;
    int digit = 0;
    int rev = 0;

    while (number)
    {
        digit = number % 10;
        rev = rev * 10 + digit;
        number /= 10;
    }
    printf("%d", rev);

    // 里面单独那个number你可以考虑考虑
}



5.输出素数
{
    5.1范围 for (int a = 2; a < 100; a++)
    {
        int tmp = 1;
        for (int c = 2; c < a; c++)
        {
            if (a % c == 0)
            {
                tmp = 0;
                break;
            }
        }
        if (tmp)
        {
            printf("%-4d", a);
        }
    }

    5.2个数 for (int a = 2, cnt = 0; cnt < 100; a++)
    {
        int tmp = 1;
        for (int c = 2; c < a; c++)
        {
            if (a % c == 0)
            {
                tmp = 0;
                break;
            }
        }
        if (tmp)
        {
            printf("%-4d", a);
            cnt++;
        }
    }
}



6.goto用法以及说不用goto，用接力break； 连续跳出循环
{
    // 题目大意是说多少个一角，两角，五角可以凑成十元

    6.1先是连续跳出，接力break的方式，创建一个变量用if传递 int one;
    int two;
    int five;
    int tmp = 0;

    for (one = 0; one <= 100; one++)
    {
        for (two = 0; two <= 50; two++)
        {
            for (five = 0; five <= 20; five++)
            {
                if (one + two * 2 + five * 5 == 100)
                {
                    printf("需要%d个一角，%d个两角，%d个五角 \n", one, two, five);
                    tmp = 1;
                    break;
                }
                if (tmp)
                    break;
            }
            if (tmp)
                break;
        }
        if (tmp)
            break;
    }

    6.2goto的用法

        int one;
    int two;
    int five;

    for (one = 0; one <= 100; one++)
    {
        for (two = 0; two <= 50; two++)
        {
            for (five = 0; five <= 20; five++)
            {
                if (one + two * 2 + five * 5 == 100)
                {
                    printf("需要%d个一角，%d个两角，%d个五角 \n", one, two, five);
                    goto out;
                }
            }
        }
    }
out:

    相当于插眼飞雷神
    先在一个地方用goto （随便定义一个名字）
        然后到你要瞬移的地方加一个（你刚刚那个名字）： goto out1;
    `
	` out1:
}



7.想隔一个反转符号的函数 sign符号函数的用法
{ //  1+1/2+1/3+....+1/n  的表达式
    for (double sum = 0.0 int a = 0; a < n; a++)
    {
        sum += 1.0 / a;
    }

    加大难度 1 - 1 / 2 + 1 / 3 - 1 / 4 + ....+ 1 / n 的表达式 double sign = 1.0 for (double sum = 0.0 int a = 0; a < n; a++)
    {
        sum += sign / a;
        sign = -sign;
    }
    在外面定义了一个sign，符号函数，每进一次循环会翻转一次符号！！
}



8.整数分解，正向拆开输出每一个数    （连带复习逆向输出）
{
#include <stdio.h>
    int main()
    {
        int number;
        int mask;
        int tmp;

        printf("请任意输入正整数：");
        scanf("%d", &number);

        int En10(int);
        void nxsc(int);
        nxsc(number);
        mask = En10(number);

        printf("%d   %d \n", number, mask);
        do
        {
            int digit = number / mask;
            number %= mask;
            mask /= 10;
            printf("%-5d", digit);
        } while (mask > 0);

        return 0;
    }

    int En10(int a)
    { // 自动算出位数，出mask！关键步骤
        int mask = 1;

        while (a > 9)
        {
            a /= 10;
            mask *= 10;
        }

        return mask;
    }

    void nxsc(int a) // 逆向输出复习
    {
        int rev = 0;
        while (a > 0)
        {
            int digit = (a % 10);
            printf("%-5d", digit);
            a /= 10;
            rev = rev * 10 + digit;
        }
        printf("%d \n", rev);
    }
}



9.辗转相除法 --求最大公约数
{
#include <stdio.h>
    int main()
    {
        int a;
        int b;

        printf("请输入两个整数：");
        scanf("%d%d", &a, &b);

        while (b)
        {
            int t = a % b;
            a = b;
            b = t;
        }

        printf("%d", a);

        return 0;
    }
}



10.水仙花数
{
#include <stdio.h>
#include <math.h>

#define START 100
#define END 10000

    int main()
    {
        int ci(int);            // 求次数
        int mask(int);          // 正向分解整数时需要的1000 100 10，10的次方
        int Sum(int, int, int); // 求左边的和，正向拆开的整数的次方求和

        for (int a = START; a < END; a++) // 遍历
        {
            int cnt = ci(a);
            int temp = mask(a);

            if (a == Sum(a, temp, cnt))
            {
                printf("%d   ", a); // 检索
            }
        }

        printf("\n");

        return 0;
    }

    int ci(int a)
    {
        int cnt = 0;

        while (a > 0)
        {
            a /= 10;
            cnt++;
        }

        return cnt;
    }

    int mask(int a)
    {
        int cnt = 1;

        while (a > 9)
        {
            a /= 10;
            cnt *= 10;
        }

        return cnt;
    }

    int Sum(int a, int temp, int cnt)
    {
        int sum = 0;

        for (int i = 0; i < cnt; i++)
        {
            int b = a / temp;
            a = a % temp;
            temp /= 10;
            int c = pow(b, cnt);
            sum += c;
        }

        return sum;
    }
}



11.下三角的九九乘法表
{
#include <stdio.h>
    int main()
    {
        int pro;
        for (int i = 1; i < 10; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                pro = j * i;
                printf("%d*%d=%-4d  ", j, i, pro);
                if (i == j)
                {
                    printf("\n");
                }
            }
        }
        return 0;
    }
}



12.函数声明应该放在main之外
{
#include <stdio.h>

    void hanshu(int, double, char);

    int main()
    {
    }
}



13.数组的集成初始化可以单一给个别数组元素赋值
{
    int a[100] = { [1] = 2,
                   [4] = 5 }
    // 实现了a[1]=2,a[4]=5,其余都是0
}



14.素数4.0
{#pragma region 
    14.1.0
    {#pragma region 

        // 1.0版本循环次数当number趋于无线时循环n次
        {
            #include <stdio.h>

			int isprime(int);

            int main()
            {
                const int number = 100;

                for (int i = 2; i <= number; i++)
                {
                    if (isprime(i))
                    {
                        printf("%-4d", i);
                    }
                }
                return 0;
            }

            int isprime(int i)
            {
                int temp = 1;

                for (int j = 2; j < i; j++) // 关键一步在这里就是说要从2开始而且要从倒数第二个数结束才能满足说不被1和自身整除
                {
                    if (i % j == 0)
                    {
                        temp = 0;
                    }
                }
                return temp;
            }
        }
    #pragma endregion}

    14.2.0
    {#pragma region 
        // 2.0版本---为n/2次
#include <stdio.h>

        int isprime(int);

        int main()
        {
            const int number = 100;

            for (int i = 1; i <= number; i++)
            {
                if (isprime(i))
                {
                    printf("%-4d", i);
                }
            }
            return 0;
        }

        int isprime(int i)
        {
            int temp = 1;

            if (i == 1 || (i != 2 && (i % 2 == 0))) // 普适性这就使得程序可以判断1，2，3前面的循环就可以从1开始
            {
                temp = 0;
            }

            for (int j = 3; j < i; j += 2) // 关键一步在这里就是说要从2开始而且要从倒数第二个数结束才能满足说不被1和自身整除
            {
                if (i % j == 0) // 注意这个地方不能耍小聪明说把==0去掉，如果去掉真为零时自动跳过而不为零时又进行语句
                {
                    temp = 0;
                    break; // 别忘记的break，现在的目的是为了精简循环
                }
            }
            return temp;
        }
    #pragma endregion}

    14.3.0（需要揣摩）
    {
        // 3.0我已经看不懂了--自己慢慢体会直接把代码对着敲下来
        // 制表啊，还有一些巧妙的数组数据存储，慢慢琢磨咯
#include <stdio.h>

#define NUMBER 10

        int isPrime(int x, int KnownPrimes[], int NumberOfKonwnPrimes);

        int main(void)
        {
            int prime[NUMBER] = {2};
            int count = 1;
            int i = 3;

            {
                int i;
                printf("\t\t");
                for (i = 0; i < NUMBER; i++)
                {
                    printf("%d\t", i);
                }
                printf("\n");
            }

            while (count < NUMBER)
            {
                if (isPrime(i, prime, count))
                {
                    prime[count++] = i;
                }
                {
                    printf("i=%d \tcnt=%d\t", i, count);
                    int i;
                    for (i = 0; i < NUMBER; i++)
                    {
                        printf("%d\t", prime[i]);
                    }
                    printf("\n");
                }
                i++;
            }

            for (i = 0; i < NUMBER; i++)
            {
                printf("%d", prime[i]);
                if ((i + 1) % 5)
                {
                    printf("\t");
                }
                else
                {
                    printf("\n");
                }
            }

            return 0;
        }

        int isPrime(int x, int KnownPrimes[], int NumberOfKnownPrimes)
        {
            int ret = 1;
            int i;

            for (i = 0; i < NumberOfKnownPrimes; i++)
            {
                if (x % KnownPrimes[i] == 0)
                {
                    ret = 0;
                    break;
                }
            }
            return ret;
        }
    }

    14.4.0（新思路）
    {
        // 4.0另一种思维模式删除倍数
#include <stdio.h>

#define NUMBER 25

        int main()
        {
            int isPrime[NUMBER];
            int x;

            for (int i = 0; i < NUMBER; i++)
            {
                isPrime[i] = 1;
            }

            for (int i = 2; i < NUMBER; i++)
            {
                if (isPrime[i])
                {
                    for (int j = 2; j * i < NUMBER; j++)
                    {
                        isPrime[i * j] = 0;
                    }
                }
            }

            for (int i = 2; i < NUMBER; i++)
            {
                if (isPrime[i])
                {
                    printf("%d\t", i);
                }
            }
            return 0;
        }
    }
#pragma endregion}



15.动态内存分配 --p =（int *）malloc（number * sizeof（）） free（）
{
#include <stdio.h>
#include <stdlib.h>

#define NUMBER 20
    int main()
    {
        // 动态内存分配去定义数组
        int *p = 0;
        p = (int *)malloc(NUMBER * sizeof(int)); // 这个就相当于定义了一个p数组，去申请l一块内存

        for (int i = 0; i < NUMBER; i++)
        {
            p[i] = i;
            printf("%d", p[i]);
        }

        free(p);

        return 0;
    }
    // 几点良好的习惯需要注意
    // 1.首先要用malloc这个动态内存分配需要#include <stdlib.h>
    // 2.其次在定义指针的时候的好习惯,int* p = 0;一开始定义的时候就直接把指针指向NULL
    // 3.注意有借有还，又p=malloc，一定配套要有free（）；
    // 4.并且特别小心的是free（p），之间的那个p的地址一定是开始申请的时候的地址只要有个p++，移动了填进去没有用的
}



16.如何安全使用scanf
{
    char a[8];
    scanf("%7s", a);
    // 给一个七，为何是七呢，首先字符串最后以为是\0，8-1=7；
    // 也就是说%【】s这之间的数是数组元素大小减一，来确保scanf读入的字符串是小于等于7个的，如果小于不会补0or空格，多了自动结束砍掉
}



17. < string.h >
{#pragma region 
    17.1 strlen
    {
        #include <stdio.h>
        #include <string.h>
        int main()
        {
            char a[] = "Hallo world!";
            printf("%lu", strlen(a));

            return 0;
        }
        // 输出的结果是12；就是有多少个字符，不包括‘/0’
        // 这个地方要与sizeof做区分，sizeof出来的值是13，包括了‘/0’
    }

    17.2 strcmp // string compare 字符串比较
    {
        #include <stdio.h>
        #include <string.h>

        int main()
        {
            char a[] = "abc";
            char b[] = "abc";
            printf("%d", strcmp(a, b));

            return 0;
        }
        // 比较函数如何运行的呢？a数组和b数组，从a[0]与b[0]开始比较如果是相等的则继续判断a[1]b[1];
        // 如果到了某一位上出现了不相等，开始比较，a<b,a>A，小写大于大写，也就是说不管后面有多大只要说你第一位就比别人小，直接就输出-1
        // 大于输出1，小于输出-1，等于输出0
    }

    17.3 strcpy // 需要再体会体会
    {
        #include <stdio.h>
        #include <string.h>

        int main()
        {
            char a[10];
            char b[10] = "abc";

            strcpy(a, b);

            printf("%s \n", a);
            return 0;
        }
        // 字符串就是常量，它不能改变，不能赋值，要么初始化的时候可以变，自此之后只能通过strcpy来改变
    }

    17.4 strcat // 没学

    17.5 strchr // 没学明白呢

    17.n // 还有好多个函数
#pragma endregion}



18.枚举 enum {
    enum color{red, green, yellow, NumColors};
    // 这样定义枚举，那个名字可要可不要，数据值从0开始递增，目的是为了减少说magic number，用一种值是递增的字母名字来代替一串数字，增加程序可读性
    enum color{red = 1, green, yellow = 5, NumColors};
    // 可以重新赋值，可以离散数据，但是赋值之后仍然是递增的。
    // 另外对NumClors这个东东进行解释，是一种小套路，可以帮助你数出这个枚举一共有多少数，方便你引用，循环or数组里面
}



19.结构体 struct；
{
    19.1用法与规则
    {
#include <stdio.h>

        struct data
        {
            int day;
            int mouth;
            int year;
        };

        int main()
        {
            struct data today;

            today.day = 13;
            today.mouth = 12;
            today.year = 2023;

            // 赋值的两种方式

            struct data tomorrow = {14, 12, 2023};
            struct data ThisMouth = {ThisMouth.mouth = 12, ThisMouth.year = 2023};

            printf("%i", ThisMouth.day);

            // 还有一种强转的方式但是只能重新赋值不能说是定义变量

            today = (struct data){14, 12, 2023};

            // 实现了说重新对变量today赋值；

            return 0;
        }

        // 1.一般把结构体的声明放在外面，以供全函数使用
        // 2.可以直接在结构体的分号之前完成结构体的定义如struct data {...}today;
        // 3.可以大括号直接赋值，编译器会自动给你把对应值赋好，但是不知为啥我vs不能用第二种赋值方式，不管说是.mouth还是说Thismouth.mouth，这两种赋值都不行
        //   我在输出的时候如上，day输出12，和第一个mouth的值正好对应不知为何。按理说应该和数组定义一样给了值就是多少，没给值就自动赋值0；
        // 4.另外要注意的是 %i 输出和读取结构体里面的值
    }

    19.2具体应用写了一个较为完善的出日期的程序 --包括了闰年2月多一天的情况 好东西自己慢慢体会
    {
#include <stdio.h>
#include <stdbool.h>

        struct date
        {
            int mouth;
            int day;
            int year;
        };

        bool isLeap(struct date b);
        int NumberOfDays(struct date b);

        int main(int argc, char const *argv[])
        {
            struct date today, tomorrow;

            printf("Enter today's date (mouth day year):");
            scanf("%i %i %i", &today.mouth, &today.day, &today.year);

            if (today.day != NumberOfDays(today))
            {
                tomorrow.day = today.day + 1;
                tomorrow.mouth = today.mouth;
                tomorrow.year = today.year;
            }
            else if (today.mouth == 12)
            {
                tomorrow.day = 1;
                tomorrow.mouth = 1;
                tomorrow.year = today.year + 1;
            }
            else
            {
                tomorrow.day = 1;
                tomorrow.mouth = today.mouth + 1;
                tomorrow.year = today.year;
            }

            printf("Tomorrow's date is %i %i %i. \n", tomorrow.mouth, tomorrow.day, tomorrow.year);

            return 0;
        }

        int NumberOfDays(struct date b)
        {
            int days;

            const int DaysPermouth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

            if (b.mouth == 2 && isLeap(b))
            {
                days = 29;
            }
            else
            {
                days = DaysPermouth[b.mouth - 1];
            }

            return days;
        }

        bool isLeap(struct date b)
        {
            bool leap = false;

            if ((b.year % 4 == 0 && b.year % 100 != 0) || b.year % 400 == 0)
            {
                leap = true;
            }

            return leap;
        }
    }
}


