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

// char *myStrcpy(char *destination, const char *src);

// int main()
// {
//     char arr1[20] = "hello world!";
//     char arr2[] = "xxxxxxxxxxxxxxx";

//     printf("%s \n", myStrcpy(arr2, arr1));

//     return 0;
// }

// char *myStrcpy(char *dest, const char *src)
// {
//     // 断言
//     assert(*dest != NULL);
//     assert(*src != NULL);

//     char *ret = src;

//     while (*dest++ = *src++)
//         ;

//     return ret;
// }

