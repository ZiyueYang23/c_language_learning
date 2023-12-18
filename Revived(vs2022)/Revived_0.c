#define _CRT_SECURE_NO_WARNINGS
// 减少内存的占用每天编的合在一起省省内存并且看看何时可以写个一百行一千行代码的成就感还是不错的嘿嘿嘿开始吧my baby！！
//
//
//  11月5号 下午 周日 图书馆 雨
// md中午没睡觉感觉好晕。。。。
// 函数调用的第一编
// #include <stdio.h>
// int min3(int a, int b,int c)
//{
//	int min = a;
//	if (b < min) {       //这里的精髓就是min，非常巧妙
//		min = b;
//	}
//	if (c < min) {
//		min = c;
//	}
//	return min;
// }
//
// int main(void)
//{
//	int a, b, c;
//
//	printf("请输入两个整数值\n");
//	printf("整数一："); scanf("%d", &a);
//	printf("整数二："); scanf("%d", &b);
//	printf("整数三："); scanf("%d", &c);
//	printf("最小的是:%d", min3(a, b,c));
//
//	return 0;
// }
// 盲打的感觉好爽真的巨爽哈哈哈编程的时候不熟练是因为一些特殊的符号按键不熟悉

////构建立方函数cube（sqr是平方函数，diff是差值并且用三目运算符一行搞定）
////补充：（a<b?b-a:a-b）;一行秒杀哈哈哈哈
// #include <stdio.h>
// int cube(int a)  //函数一立方函数
//{
//	return a * a * a;
// }
//
// int diff(int a, int b)  //函数二差值函数  现在意义的函数像一个小机器小房间你输入值之后把数值送到小房间里运算运算完了
//{                                       //之后嘞return出来并且带一个小礼物即你需要的值给你送回来
//	return (a < b ? b - a : a - b);
// }
//
// int main(void)   //输入数值
//{
//	int a, b;
//
//	printf("整数一："); scanf("%d", &a);
//	printf("整数二："); scanf("%d", &b);
//	printf("立方的差值为=%d \n", diff(cube(a), cube(b)));
//
//	return 0;
// }
////全程盲打虽然有点慢但是指法没有问题慢慢练找手感（（（：：；；&%%%&&&%&%&%&&%&%&%&%，，，，别着急哈
////越学越发现自己的渺小知识是无穷的，我要刷一下午c，上午刷高数很爽废寝忘食

////四次幂四位数比大小组合体
// #include <stdio.h>  sqr是平方 cube是立方
// int sqr(int a)
//{
//	return a * a;
// }
//
// int pow4(int a)
//{
//	return sqr(sqr(a));
// }
//
// int max2(int a, int b)
//{
//	return ((a > b) ? a : b);
// }
//
// int max4(int a, int b, int c, int d)
//{
//	return max2(max2(a, b), max2(c, d));
// }
//
// int main(void)
//{
//	int a, b, c, d;
//
//	printf("整数一："); scanf("%d", &a);
//	printf("整数二："); scanf("%d", &b);
//	printf("整数三："); scanf("%d", &c);
//	printf("整数四："); scanf("%d", &d);
//	printf("最大的四次方是：%d", max4(pow4(a), pow4(b), pow4(c), pow4(d)));
//
//	return 0;
// }//秒杀喽很简单嘛，，max4 pow4 在函数里面是没啥用但是到最后是真有用哈

////n次幂(注意小数部分  scnaf与printf符号会变)  power为幂函数的意思
// #include <stdio.h>
// double power(double a, int b)  //注意用double为函数头 （函数名 形参）
//{
//	double tmp = 1.0;
//
//	while (b-- > 0) {    //这个地方就是while比for简单 for需要多定义一个变量c然后自加
//		tmp *= a;
//	}
//	return tmp;
// }
//
// int main(void)
//{
//	double a;
//	int b;
//
//	printf("输入a的值：");
//	scanf("%lf", &a);
//	printf("几次幂：");
//	scanf("%d", &b);
//
//	printf("%.3f的%d次幂是%.3f",a,b, power(a, b));
//	return 0;
// }

////一到n的所有的整数的和 用sumup这个函数名表示总和
// #include <stdio.h>
// int sumup(int a)
//{
//	int tmp = 0;
//	int b;
//
//	for (b = 1; b <= a; b++) {    //注意这个地方就不能用while（a-->0）这一步了，它会少a这一项，一上来就自减了一，把最后一项减掉了
//		tmp += b;                 //也就导致了在tmp求和中少加了最后一项a，只加到了a-1这一步而且好像还无法修改
//	}
//
//	return tmp;
// }
//
// int main(void)
//{
//	int a;
//
//	printf("请输入整数a：");
//	scanf("%d", &a);
//	printf("1-%d的所有整数的和为%d \n", a,sumup(a));
//
//	return 0;
// }
////我靠有点累一上午高数一下午c脑子要用光了aaaa，很专注很用功，冲冲冲 aaaa明天运动会一定不要有负罪感大胆去玩
////大胆运动大胆“浪费时间”，你值得非常值得，好好休息哈，比赛加油，晚上篮球赛也加油！！！妈的受不了了我想去玩辣

// 运动会归来两天没打字手好僵啊，也有可能是桌子有点高不太适应但是把对脖子和颈椎好哈哈哈
// 越来越感觉知识的庞大无穷冲冲冲学通c语言

////无需返回函数用void做函数头
// #include <stdio.h>
// void alert(int a)
//{
//	while (a-- > 0) {
//		printf("*");
//	}
// }
//
// int main(void)
//{
//	int b;
//
//	printf("请输入响铃次数：");
//	scanf("%d", &b);
//	alert(b);
//
//	return 0;
// }

////开始上强度啦aaa
////数组中的最小值
// #include <stdio.h>
//
// #define NUMBER 5    //元素个数
//
// int tensu[NUMBER];  //数组定义
//
// int min_of(const int v[], int n)
//{
//	int a;
//	int min = v[0];
//
//	for (a = 1; a < n; a++) {
//		if (v[a] < min) {
//			min = v[a];
//		}
//	}
//
//	return min;
// }
//
// int main(void)
//{
//	int a, b;
//
//	printf("请输入运行次数：");
//	scanf("%d", &a);
//
//	for (b = 0; b < a; b++) {
//		printf("%d:", b + 1);
//		scanf("%d", &tensu[b]);
//	}
//
//	printf("min=%d", min_of(tensu, a));
// }

////数组倒序循环
// #include <stdio.h>
//
// #define NUMBER 5
//
// int tensu[NUMBER];
//
// void rev_intary(int v[], int c)
//{
//	int b=0,a;
//
//	for (a = 0; a < 2; a++) {
//		b = v[a];
//		v[a] = v[c-1 - a];
//		v[c-1 - a] = b;
//	}
// }
//
// int main(void)
//{
//	int n;
//	int tensu[NUMBER];
//
//	for (n = 0; n < NUMBER; n++) {
//		printf("tensu[%d]=", n);
//		scanf("%d", &tensu[n]);
//	}
//
//	printf("----分界线---- \n");
//
//	rev_intary(tensu, NUMBER);   //它就相当于进入一个小房间rev_intary，把顺序交换
//
//	for (n = 0; n < NUMBER; n++) {
//		printf("tensu[%d]=%d", n,tensu[n]);   //然后直接输出tensu[n]
//		printf("\n");
//	}
//	return 0;
// }
////确实上强度我靠，我还想编但是要回去了keep love···

// 第二天早上图书馆嘿嘿嘿
// 今天学到了好的学习方法
// 方法一：村上春树的定量法  但是吧每天把时间分的很散，一些不必要的水课不方便固定时间
// 方法二：自己讲出来
// 方法三：把计划列出来

// #include <stdio.h>
//
// #define NUMBER 10
//
// int v1[NUMBER];
// int v2[NUMBER];
//
// void intary_rcpy(int v1[], const int v2[], int n)  //v2传递到v1
//{
//	int a;
//	for (a = 0; a < n; a++) {
//		v1[a] = v2[a];
//	}
// }
//
// void rev_intary(int v2[], int n)    //倒序排列
//{
//	int a;
//	for (a = 0; a < n/2; a++) {
//		int b = v2[a];
//		v2[a] = v2[n - 1 - a];
//		v2[n - 1 - a] = b;
//	}
// }
//
// int main()
//{
//	int a,n;
//	printf("请输入数组v2你需要元素的个数：");
//	scanf("%d", &n);
//
//	for (a = 0; a < n; a++) {
//		printf("v2[%d]=", a);
//		scanf("%d", &v2[a]);
//	}
//
//	printf("----分界线----\n");
//
//	rev_intary(v2, n);
//	intary_rcpy(v1, v2, n);
//
//	for (a = 0; a < n; a++) {
//		printf("v1[%d]=%d", a,v1[a]);
//		printf("\n"); //别掉了换行
//	}
//	return 0;
// }
// 存在的意义就是简化主函数

////我靠上强度啦啊啊啊、
// #include <stdio.h>
//
// #define NUMBER 10
// #define FAILED -1
//
// int v[NUMBER+1];
// int shou[NUMBER];
//
// void fu_v(int v[], int n)  //给v数组的每一个元素赋值
//{
//	int a;
//
//	for (a = 0; a < n; a++) {
//		printf("v[%d]=", a);
//		scanf("%d", &v[a]);
//	}
// }
//
// void cha_chu(int v[], int shou[], int key, int n,int b)   //哨兵查找出数量和数组
//{
//	int a;
//
//	v[n] = key;
//
//	for (a = 0; a < n; a++) {
//		if (v[a] == key) {
//			shou[b] = a+1 ;
//			b++;
//			printf("shou[%d]=%d \n", b-1, a + 1);
//		}
//	}
//	printf("%d", b);
// }
//
// int cha_w(int v[], int key, int n)
//{
//	int a;
//
//	v[n] = key;
//
//	for (a = 0; v[a] != key; a++);
//
//	return (a < n ? a : FAILED);
// }
//
// int main(void)
//{
//	int n, key, b=0;
//
//	printf("请输入需要元素个数：");
//	scanf("%d", &n);
//
//	fu_v(v, n); //给v数组赋值
//
//	printf("请输入需要查找的数值：");
//	scanf("%d", &key);
//
//	if (cha_w(v, key, n) == FAILED) {
//		printf("暂无此值,查找失败");
//	}
//	else {
//		cha_chu(v, shou, n, key, b);
//	}
//
//	return 0;
// }
////md好难啊啊啊啊、

///*
//	顺序查找（哨兵查找法）
//*/
//
// #include <stdio.h>
//
// #define NUMBER		5		/* 元素个数*/
// #define FAILED		-1		/* 查找失败 */
//
///*--- 从元素个数为n的数组v中查找和key一致的元素（哨兵查找法）---*/
// int search(int v[], int key, int n)
//{
//	int i = 0;
//
//	v[n] = key;		/* 添加哨兵 */
//
//	while (1) {
//		if (v[i] == key)
//			break;			/* 查找成功 */
//		i++;
//	}
//	return (i < n) ? i : FAILED;
// }
//
// int main(void)
//{
//	int i, ky, idx;
//	int vx[NUMBER + 1];
//
//	for (i = 0; i < NUMBER; i++) {
//		printf("vx[%d]：", i);
//			scanf("%d", &vx[i]);
//	}
//	printf("要查找的值：");
//	scanf("%d", &ky);
//
//	if ((idx = search(vx, ky, NUMBER)) == FAILED)
//		puts("\a查找失败。");
//	else
//		printf("%d是数组的第%d号元素。\n", ky, idx + 1);
//
//	return 0;
// }

////我靠真服啦好难好难好难
// #include <stdio.h>
//
// #define NUMBER 10
// #define SHIBAI -1
//
// int cha_chu(const int v[], int shou[], int key, int n)
//{
//	int a,b=0;
//
//	for (a = 0; a <= n; a++) {
//		if (v[a] == key) {
//			shou[b] = a + 1;
//			b++;
//			printf("%d ",a+1);
//		}
//	}
//	if (a == n) {
//		return SHIBAI;
//	}
//	else
//		return b;
// }
//
// int main()
//{
//	int n, a, key;
//	int v[NUMBER];
//	int shou[NUMBER];
//
//	printf("请输入需要的数组个数：");
//	scanf("%d", &n);
//
//	for (a = 0; a < n; a++) {
//		printf("v[%d]=", a);
//		scanf("%d", &v[a]);
//	}
//	printf("请输入你需要查找的值：");
//	scanf("%d", &key);
//
//	v[n] = key;
//
//	if ((cha_chu(v, shou, key, n) == SHIBAI)) {
//		printf("查找失败\n");
//	}
//	else
//		printf("%d", cha_chu(v, shou, key, n));
//
//	return 0;
// }
////说实话编不出来啦aaaa，md好累，。。。。好好好第一次遇到编不出来的题啦真是受不了了。。。上强度上强度
////慢慢来打好基础，我可以不做前面的练习狂冲，但是呢，又没人和你比快，打好基础比什么都好，稳扎稳打啃书不急，加油虽然我很想通关c
////矮油狼子野心啊贪多嚼不烂，本来就是以稳定持久扎实起家又没人去督促你非要赶紧学是不是嘞，这就是受他人影响对不对。

// 昨天又没摸电脑啊啊啊啊、手又僵了生了以后每天必须编一编想着做点题刷一刷
// 我感觉遇到瓶颈然后导致我有点惧怕就不太想编  come on！就这你就怕了？？
// 来吧来吧我迫不及待
// #include <stdio.h>
//
// #define diff(x,y) ((x<y)?y-x:x-y)   //非常巧妙啊一个三目运算符解决所有哈哈哈哈哈哈哈哈哈哈
//
// int main()
//{
//	int a, b;
//
//	printf("请输入a的值："); scanf("%d", &a);
//	printf("请输入b的值："); scanf("%d", &b);
//
//	printf("计算差值=%d", diff(a,b));
//
//	return 0;
// }
// 兄弟你要充满自信相信自己其他人都只是npc，感谢你的竞争对手，感谢蓝天白云，感谢一切

////冒泡排序（从后往前冒泡排序）
// #include <stdio.h>
//
// #define NUMBER 5
//
// void pai_xu(int v[], int n)
//{
//	int a, b;
//
//	for (a = 0; a < n - 1; a++) {
//		for (b = n-1; b > a; b--) {
//			if (v[b] < v[b - 1]) {
//				int temp = v[b];
//				v[b] = v[b - 1];
//				v[b - 1] = temp;
//			}
//		}
//	}
// }
//
// int main()
//{
//	int a;
//	int v[NUMBER];
//
//	printf("请输入%d个学生的身高 \n",NUMBER);
//	for (a = 0; a < NUMBER; a++) {
//		printf("v[%d]=", a);
//		scanf("%d", &v[a]);
//	}
//
//	pai_xu(v, NUMBER);
//	printf("----分界线----\n");
//	for (a = 0; a < NUMBER; a++) {
//		printf("v[%d]=%d", a,v[a]);
//		printf("\n");
//	}
//
//	return 0;
// }
////500行纪念哈哈哈哈哈

////冒泡排序从前往后
// #include <stdio.h>
//
// #define NUMBER 5
//
// int v[NUMBER];
//
// void pai_xu(int v[], int n)
//{
//	int a, b;
//
//	for (a = 1; a < n ; a++) {
//		for (b = 0; b < n - a; b++) {
//			if (v[b+1] > v[b]) {
//				int tmp = v[b];
//				v[b] = v[b + 1];
//				v[b + 1] = tmp;
//			}
//		}
//	}
// }
//
// int main(void)
//{
//	int a;
//
//	printf("请输入%d位学生的身高\n", NUMBER);
//
//	for (a = 0; a < NUMBER; a++) {
//		printf("v[%d]=", a);
//		scanf("%d", &v[a]);
//	}
//
//	printf("----分界线---- \n");
//
//	pai_xu(v, NUMBER);
//
//	for (a = 0; a < NUMBER; a++) {
//		printf("v[%d]=%d",a,v[a]);
//		printf("\n");
//	}
//
//	return 0;
// }
////规范键法，规范指法，练就肌肉记忆，和应激反应，【】{}%d%d&a&a》《《《《《，，，，，。。。。。。和。；；；；；；；’‘’‘’‘”“
////加油a杨子悦就是最屌的哈哈哈哈盲打的感觉很不错嘿嘿嘿爽爽爽

////枚举月份
// #include <stdio.h>
// enum jijie { Chun = 3||4||5, Xia = 6 || 7 || 8, Qiu = 9 || (10) || (11), Dong = (12) || 1 || 2, jieshu = 0 };
//
// void chun(void)
//{
//	printf("为春季");
// }
//
// void xia(void)
//{
//	printf("为夏季");
// }
//
// void qiu(void)
//{
//	printf("为秋季");
// }
//
// void dong(void)
//{
//	printf("为冬季");
// }
//
// enum jijie xuanze(void)
//{
//	int tmp;
//
//	do {
//		printf("请输入月份：  输入0结束");
//		scanf("%d", &tmp);
//	} while (tmp < 1 || tmp>12);
//
//	return (enum jijie)tmp;
// }
//
// int main(void)
//{
//	enum jijie xuanze();
//
//	do {
//		switch (xuanze()) {
//		case Chun:chun(); break;
//		case Xia:xia(); break;
//		case Qiu:qiu(); break;
//		case Dong:dong(); break;
//		}
//	} while (xuanze() != jieshu);
//
//	return 0;
// }
// 妈的编了个寂寞，我不会表示范围啊真服了

////函数递归之阶乘
// #include <stdio.h>
//
// int jiecheng(int n)    //注意不需要再次定义n；
//{
//	if (n > 0)
//	{
//		return n*jiecheng(n - 1);   //就相当于阶乘定义就是用n！=n*（n-1）！
//	}
//	else
//		return 1;
// }
//
// int main(void)
//{
//	int n;
//
//	printf("请输入正整数n的值：");
//	scanf("%d", &n);
//	printf("该值的阶乘为%d", jiecheng(n));
//
//	return 0;
// }

// 不用递归函数完成阶乘完了我好像不会这个mmd以后在想想

////组合数
// #include <stdio.h>
// int jiecheng(int n)
//{
//	if (n > 0) {
//		return n * jiecheng(n - 1);
//	}
//	else {
//		return 1;
//	}
// }
//
// int zuheshu(int n, int r)
//{
//	int tmp;
//
//	tmp = jiecheng(n) / (jiecheng(n - r) * jiecheng(r));   //组合数定义
//
//	return tmp;
// }
//
// int main(void)
//{
//	int n, r;
//
//	printf("请输入正整数n，r的值：");
//	scanf("%d%d", &n, &r);
//
//	printf("组合数Cn_r的值为%d",zuheshu(n,r));
//
//	return 0;
// }

////函数递归之求最大公约数--通过辗转相除法
// #include <stdio.h>
//
// int qiuzdgy(int a, int b)
//{
//	int c = 0,d = 0;
//
//	c = (a < b) ? b : a;  //长边
//	d = (a < b) ? a : b;  //短边
//
//	if (c % d != 0) {
//		qiuzdgy(d, c % d);
//	}
//	else {
//		return d;
//	}
// }
//
// int main(void)
//{
//	int a, b;
//
//	printf("请输入长方形的两条边长：");
//	scanf("%d%d", &a, &b);
//
//	printf("两数的最大公约数为%d", qiuzdgy(a, b));
//
//	return 0;
// }
////今天编的有点爽哈哈哈哈盲打越来越熟练加油杨子悦嘿嘿嘿结束高数启动！！！！！

// 新的一天嘿嘿嘿加油继续练习盲打冲冲冲杨子悦就是最屌的哈哈哈除了自己还会有别人这样夸你吗是不是自己给自己打气加油
// 整了杯古茗妈的好甜好甜齁甜，只能这莫说日子很苦但生活要很甜加油冲冲冲

// #include <stdio.h>
//
// int main(void)
//{
//	char v[] = "\0ABC\0DEF";
//
//	printf("\'%s\'", v);
//
//	return 0;
// }
// 简单字符串的应用

// #include <stdio.h>
//
// #define NUMBER 5
//
// int main(void)
//{
//	int a,b;
//	char v[NUMBER][128];
//
//	for (a = 0; a < NUMBER; a++) {
//		printf("v[%d]=", a);
//		scanf("%s", v[a]);
//
//		if (v[a] == "a b c d") {
//			break;
//		}
//		static int a;
//	}
//
//	for (b = 0; b < a; b++) {
//		printf("v[%d]=%s", b, v[b]);
//	}
//
//	return 0;
// }

// #include <stdio.h>
//
// #define NUMBER 5
//
// char chu(char v[][128])
//{
//	int a;
//
//	for (a = 0; a < NUMBER; a++) {
//		printf("v[%d]=", a);
//		scanf("%s", v[a]);
//
//		if (v[a] == "$$$$") {
//			break;
//		}
//	}
//	return a;
// }
//
// int main(void)
//{
//	int a;
//	char v[NUMBER][128];
//
//	for (a = 0; a < chu(v); a++) {
//		printf("v[%d]=%s", a, v[a]);
//	}
//
//	return 0;
// }
// 讲真感觉下午状态挺差的。。。效率不高，心不够静，有点着急

// 现在回看起来真是令人唏嘘啊我靠原来我感觉我还挺喜欢的，，，，不不不我现在也喜欢
////没事的稳扎稳打相信自己，杨子悦超棒的，一定可以做到的，我相信你，加油加油加油！！
// #include <stdio.h>
// int main()
//{
//	//还是那莫熟悉哈哈哈
//	int analogy(int a,int b);
//
//	struct Student
//	{
//		char name[20];
//		int age;
//		double score;
//	}student1, student2;
//
//	scanf("%s%d%lf",student1.name, &student1.age, &student1.score);
//	scanf("%s%d%lf",student2.name, &student2.age, &student2.score);
//
//	if (analogy(student1.score, student2.score)) {
//		printf("%s  %d  %6.2f", student1.name, student1.age, student1.score);
//	}
//	else {
//		printf("%s  %d  %6.2f", student2.name, student2.age, student2.score);
//	}
//
//	return 0;
// }
//
// int analogy(int a, int b)
//{
//	if (a > b) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
// }
////有思想有创新非常不错，能够编出一些属于自己的东西出来挺好咱们不急慢慢弄稳扎稳打

// Revived
// 第二天开始继续，我热爱编程，我想干出一些东西出来，加油杨子悦

////指针交换排序
//
// #include <stdio.h>
//
// int main()
//{
//	int a[3] = {1,2,3};
//	int* p;
//	int m, n;
//
//	void paixu(int* p);
//
//	p = a;
//
//	paixu(a);
//
//	p = a;
//
//	for (m = 0; m < 3; m++,p++) {
//		printf("%d", *p);
//	}
//
//	return 0;
//}
//
// void paixu(int* p)
//{
//	void swap(int* a, int* b);
//	if (*p > *(p + 1)) {
//		if (*(p + 1) < *(p + 2)) {
//			swap((p + 1), (p + 2));
//		}
//	}
//	else {
//		swap(p, p + 1);
//		if (*(p + 1) < *(p + 2)) {
//			swap(p + 1, p + 2);
//		}
//	}
//}
//
// void swap(int* a, int* b)
//{
//	int temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}

////选择排序--大到小
// #include <stdio.h>
// int main()
//{
//	int arr[10] = { 4,35,0,7,10,1,3,8,9,6 };
//
//	int m, n;
//
//	for (int a = 0; a < 9; a++)
//	{
//		for (int b = 1 + a; b < 10; b++)
//		{
//			if (arr[a] < arr[b])
//			{
//				int c = arr[a];
//				arr[a] = arr[b];
//				arr[b] = c;
//			}
//		}
//	}
//
//	for (m = 0; m < 10; m++)
//	{
//		printf("%d   ", arr[m]);
//	}
//
//	return 0;
// }

// #include <stdio.h>
// int main()
//{
//	int* p1;
//	int* p2;
//	int a, b;
//
//	printf("请输入你两个正整数：");
//	scanf("%d%d", &a, &b);
//
//	p1 = &a;
//	p2 = &b;
//
//	void swap(int*, int*);
//
//	printf("%d  %d \n", a, b);
//
//	swap(p1, p2);
//
//	printf("%d  %d", a, b);
//
//	return 0;
// }
//
// void swap(int* p1, int* p2)
//{
//	int t = *p1;
//	*p1 = *p2;
//	*p2 = t;
// }

//
// #include <stdio.h>
// int main()
//{
//	void exchange(int*, int*, int*);
//	int a, b, c;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//
//	printf("请输入三个正整数：");
//	scanf("%d%d%d", p1, p2, p3);
//
//	printf("%5d%5d%5d", a, b, c);
//
//	exchange(p1, p2, p3);
//
//	printf("%5d%5d%5d", a, b, c);
//
//	return 0;
//}
//
////小到大
// void exchange(int* p1, int* p2, int* p3)
//{
//	void swap(int*, int*);
//	if (*p1 > *p2) swap(p1, p2);
//	if (*p1 > *p3) swap(p1, p3);
//	if (*p2 > *p3) swap(p2, p3);    //这个地方需要你好好想想！！！！
//	//如何理解这个地方呢，1与2比，出较小一个会在第一个的位置无论换与不换两者之中最小的的一个会在最左边，然后再与3位置的数比较，会出三个数中
//	//最小的一个出现在1位置，然后再比较剩余两个数的大小！！！
// }
//
// void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
// }

// 好久不见，学到指针就畏难了就不想学c，磨灭了兴趣，哥们这才刚刚开始呢，加油，隔了一段时间，手生了，东西也忘了挺多的的了，该补一补了
// 就是说现在我很喜欢高数对英语背单词也不太抵触了还挺想学一学英语装下b，但是嘞c语言就放了好久，这学期学完c就结束了，编程能力我打算放在寒假
// 去着重练习，现在就是为了各科考高分，稍微放了放c，加油加油温故而知新，这门更应该高分。静下心来学专注，定期回顾复习一定可以的加油杨子悦！！

// 又是许久未见啊，一直有点逃避和畏难c兄弟这才刚刚开始呢加油一定可以的冲冲冲

////putchar and getchar
// #include <stdio.h>
// int main()
//{
//	char a, b, c;
//
//	a = getchar();
//	b = getchar();
//	c = getchar();
//
//	putchar(a);
//	putchar(b);
//	putchar(c);
//
//	return 0;
// }

// #include <stdio.h>
// int main()
//{
//	int  a, b;
//	a = 197;
//	b = 198;
//
//	printf("%d %c %d %c", a, a, b, b);
//
//	return 0;
// }

// #include <stdio.h>
// int main()
//{
//	int a, b;
//	double c, d;
//	char e, f;
//
//	scanf("a=%d b=%d", &a, &b);
//	scanf("%f%E", &c, &d);
//	scanf("%c%c", &e, &f);
//
//	printf("%d %d %f %E %c %c", a, b, c, d, e, f);
//	return 0;
// }
// 慢慢来别着急

// #include <stdio.h>
// int main()
//{
//	int max(int a, int b, int c);
//	int a, b, c;
//
//	printf("请输入三个整数：");
//	scanf("%d%d%d", &a, &b, &c);
//
//	printf("最大值为%d", max(a, b, c));
//
//	return 0;
// }
//
// int max(int a, int b, int c)
//{
//	int max;
//
//	if (a > b) {
//		max=((c > a) ? c : a);
//	}
//	else {
//		max = ((c > b) ? c : b);
//	}
//
//	return max;
// }

// #include <stdio.h>
//
// #define NUMBER 100
//
// int main()
//{
//	int sum = 0,a=0;
//
//	while (++a<=NUMBER) {    //解题经验的积累智慧火花的碰撞哈哈哈哈极简
//		sum+=a;
//	}
//
//	printf("和为%d", sum);
//
//	return 0;
// }

// 我现在感觉应该叫新的篇章，我靠，我打字速度有点快啊，有点小爽哈哈哈哈

////斐波拉契数列
// #include <stdio.h>
//
// #define NUMBER 100
// int main()
//{
//	int a = 1;
//	int b;
//	int c;
//	int sum;
//
//	printf("%d", a);
//
//	for (b = 1; b < NUMBER; b++)
//	{
//		for (c = 0; c < b; c++)
//		{
//			sum=c+b
//		}
//	}
// }好像期末考试并不在意说你的编程能力更像是说你对一些基本概念，以及基本程序会不会解哎

// 芜湖有好久不见哟，好久没编矮油真服啦今天学了指针****这个东东还是挺爽的你要自信相信自己把该做的做好
// 听说大一下课少，可以先学数据结构巴拉巴拉的。

// Revived 使复苏 复活的 告诫自己该咋学，也告诫世人我将卷土重来！！！

////猜数游戏
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// int main()
//{
//	srand(time(0));
//	int number = rand()%100;
//	int tmp;
//	int time=0;
//
//	printf("猜数游戏开始\n");
//	printf("请猜0-100之间的一个数");
//	scanf("%d", &tmp);
//
//	if (tmp == number) {
//		printf("哥们儿吃点好的把！");
//	}
//
//	do {
//		if (tmp < number) {
//			printf("小了");
//			scanf("%d", &tmp);
//			time++;
//		}
//		if (tmp > number) {
//			printf("大了");
//			scanf("%d", &tmp);
//			time++;
//		}
//	} while (tmp != number);
//
//	if (tmp == number) {
//		printf("恭喜你游戏结束，猜出的次数为%d",time);
//	}
//
//	return 0;
// }

////逆序排列(单个输出)
// #include <stdio.h>
// int main()
//{
//	int number;
//	int digit=0;
//	int rev=0;
//
//	printf("请输入一个较长整数");
//	scanf("%d", &number);
//
//	while (number) {
//		digit = number % 10;
//		printf("%d", digit);
//		number /= 10;
//	}
//
//	return 0;
// }

////整体输出
// #include <stdio.h>
// int main()
//{
//	int number;
//	int digit = 0;
//	int rev = 0;
//
//	printf("请输入一个较长整数");
//	scanf("%d", &number);
//
//	while (number) {
//		digit = number % 10;
//		rev = rev * 10 + digit;
//		printf("number=%d,digit=%d,rev=%d \n", number, digit, rev);
//		number /= 10;
//	}
//
//	printf("number=%d,digit=%d,rev=%d", number, digit, rev);
//	return 0;
// }

//
// 输出一百以内的素数
// #include <stdio.h>
// int main()
//{
//	for (int tmp = 1, a = 2; a < 1000000; a++) {
//		for (int c = 2; c < a; c++) {
//			if (a % c == 0) {
//				tmp = 0;
//				break;
//			}
//		}
//		if (tmp) {
//			printf("%-4d", a);
//		}
//	}
//
//	return 0;
//}

////凑硬币十块需要多少个一角两角五角构成
////没必要想半天就直接遍历重复是计算机最擅长的
// #include <stdio.h>
// int main()
//{
//	int one;
//	int two;
//	int five;
//
//	for (one = 0; one <= 100; one++) {
//		for (two = 0; two <= 50; two++) {
//			for (five = 0; five <= 20; five++) {
//				if (one + two * 2 + five * 5 == 100) {
//					printf("需要%d个一角，%d个两角，%d个五角 \n",one,two,five);
//				}
//			}
//		}
//	}
//
//	return 0;
// }
//
//
////下面请问如果说我只想输出一个咋办一种方法是加一个变量用if
////学名叫接力break
// #include <stdio.h>
// int main()
//{
// int one;
// int two;
// int five;
// int tmp = 0;

// for (one = 0; one <= 100; one++) {
//	for (two = 0; two <= 50; two++) {
//		for (five = 0; five <= 20; five++) {
//			if (one + two * 2 + five * 5 == 100) {
//				printf("需要%d个一角，%d个两角，%d个五角 \n", one, two, five);
//				tmp = 1;
//				break;
//			}
//			if (tmp) break;
//		}
//		if (tmp)break;
//	}
//	if (tmp)break;
// }
//
//	return 0;
//}
//
// 另一种方式就是用goto不过不建议用就是说用多了容易造成混乱
// #include <stdio.h>
// int main()
//{
//	int one;
//	int two;
//	int five;
//
//	for (one = 0; one <= 100; one++) {
//		for (two = 0; two <= 50; two++) {
//			for (five = 0; five <= 20; five++) {
//				if (one + two * 2 + five * 5 == 100) {
//					printf("需要%d个一角，%d个两角，%d个五角 \n", one, two, five);
//					goto out;
//				}
//			}
//		}
//	}
//	out:
//	return 0;
//}

// 自动出位数，按顺序正向单个输出每一个数

// #include <stdio.h>
// int main()
//{
//	int number;
//	int mask;
//	int tmp;
//
//	printf("请任意输入正整数：");
//	scanf("%d", &number);
//
//	int En10(int);
//	void nxsc(int);
//	nxsc(number);
//	mask = En10(number);
//
//	printf("%d   %d \n", number, mask);
//	do {
//		int digit = number / mask;
//		number %= mask;
//		mask /= 10;
//		printf("%-5d", digit);
//	} while (mask > 0);
//
//	return 0;
// }
//
// int En10(int a) {
//	int mask = 1;
//
//	while (a > 9) {
//		a /= 10;
//		mask *= 10;
//	}
//
//	return mask;
// }
//
// void nxsc(int a)
//{
//	int rev = 0;
//	while (a > 0) {
//		int digit = (a % 10);
//		printf("%-5d", digit);
//		a /= 10;
//		rev = rev * 10 + digit;
//	}
//	printf("%d \n", rev);
// }

////辗转相除法----求最大公约数
//
//
// #include <stdio.h>
// int main()
//{
//	int a;
//	int b;
//
//	printf("请输入两个整数：");
//	scanf("%d%d", &a, &b);
//
//	while (b) {
//		int t = a % b;
//		a = b;
//		b = t;
//	}
//
//	printf("%d", a);
//
//	return 0;
//}

////题目一
// #include <stdio.h>
// int main()
//{
//	int a;
//	int cnt = 0;
//
//	printf("请输入整数a：");
//	scanf("%d", &a);
//
//	for (int i = a; i < a + 4; i++)
//	{
//		for (int j = a; j < a + 4; j++)
//		{
//			for (int k = a; k < a + 4; k++)
//			{
//				if (i != j && j != k && i != k)
//				{
//					printf("%d%d%d", i, j, k);
//					cnt++;
//					if (cnt == 6)
//					{
//						cnt = 0;
//						printf("\n");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//			}
//		}
//	}
//	return 0;
// }

////题目二水仙花数
//
/////牛逼！！！！！！！
//
// #include <stdio.h>
// #include <math.h>
//
// #define START 100
// #define END 10000
//
// int main()
//{
//	int ci(int);
//	int mask(int);
//	int Sum(int, int, int);
//
//	for (int a = START; a < END; a++)
//	{
//		int cnt = ci(a);
//		int temp = mask(a);
//
//		if (a == Sum(a, temp, cnt))
//		{
//			printf("%d   ", a);
//		}
//	}
//
//	printf("\n");
//
//	return 0;
//}
//
// int ci(int a)
//{
//	int cnt = 0;
//
//	while (a > 0)
//	{
//		a /= 10;
//		cnt++;
//	}
//
//	return cnt;
//}
//
// int mask(int a)
//{
//	int cnt = 1;
//
//	while (a > 9)
//	{
//		a /= 10;
//		cnt *= 10;
//	}
//
//	return cnt;
//}
//
// int Sum(int a, int temp,int cnt)
//{
//	int sum=0;
//
//	for (int i = 0; i < cnt; i++)
//	{
//		int b = a / temp;
//		a = a % temp;
//		temp /= 10;
//		int c = pow(b, cnt);
//		sum += c;
//	}
//
//	return sum;
//}

////打印下三角的九九乘法表
// #include <stdio.h>
// int main()
//{
//	int pro;
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++) {
//			pro = j * i;
//			printf("%d*%d=%-4d  ", j, i, pro);
//			if (i == j)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
// }

////素数求和复习
////首先什么是素数？素数是除了一和自身以外没有可除的数
// #include <stdio.h>
//
// int main() {
//	for (int a = 2; a < 100; a++) {
//		int tmp = 1;
//		for (int c = 2; c < a; c++) {
//			if (a % c == 0) {
//				tmp = 0;
//				break;
//			}
//		}
//		if (tmp) {
//			printf("%-4d", a);
//		}
//	}
//	return 0;
// }

// 求序列前n项的和
// 2/1+3/2+5/3。。。。
// 我靠突然好困好混啊，没必要去想别人在干啥，与你无关你也控制不了，花费自己的时间和精力去干这无意义的时间和事情是吧
// 为啥这么困这么昏a我真服了

// ciao!!!!莫名奇妙的动了yw妈的然后去厕所。。没事十天前下一次是考完试之后好吧哥们我信你

////再战素数
////素数定义是说除了1和它自身以为没有其他的约数，1，0都不是素数
//
////1.0版本循环次数当number趋于无线时循环n次
// #include <stdio.h>
//
// int isprime(int);
//
// int main()
//{
//	const int number = 100;
//
//	for (int i = 2; i <= number; i++)
//	{
//		if (isprime(i))
//		{
//			printf("%-4d", i);
//		}
//	}
//	return 0;
// }
//
// int isprime(int i)
//{
//	int temp = 1;
//
//	for (int j = 2; j < i; j++)  //关键一步在这里就是说要从2开始而且要从倒数第二个数结束才能满足说不被1和自身整除
//	{
//		if (i % j == 0)
//		{
//			temp = 0;
//		}
//	}
//	return temp;
// }
//
////2.0版本---为n/2次
// #include <stdio.h>
//
// int isprime(int);
//
// int main()
//{
//	const int number = 100;
//
//	for (int i = 1; i <= number; i++)
//	{
//		if (isprime(i))
//		{
//			printf("%-4d", i);
//		}
//	}
//	return 0;
// }
//
// int isprime(int i)
//{
//	int temp = 1;
//
//	if (i == 1 || (i != 2 && (i % 2 == 0)))  //普适性这就使得程序可以判断1，2，3前面的循环就可以从1开始
//	{
//		temp = 0;
//	}
//
//	for (int j = 3; j < i; j+=2)  //关键一步在这里就是说要从2开始而且要从倒数第二个数结束才能满足说不被1和自身整除
//	{
//		if (i % j == 0)   //注意这个地方不能耍小聪明说把==0去掉，如果去掉真为零时自动跳过而不为零时又进行语句
//		{
//			temp = 0;
//			break;    //别忘记的break，现在的目的是为了精简循环
//		}
//	}
//	return temp;
// }
//
//
//
////3.0我已经看不懂了--自己慢慢体会直接把代码对着敲下来
////制表啊，还有一些巧妙的数组数据存储，慢慢琢磨咯
// #include <stdio.h>
//
// #define NUMBER 10
//
// int isPrime(int x, int KnownPrimes[], int NumberOfKonwnPrimes);
//
// int main(void)
//{
//	int prime[NUMBER] = { 2 };
//	int count = 1;
//	int i = 3;
//
//	{
//		int i;
//		printf("\t\t");
//		for (i = 0; i < NUMBER; i++)
//		{
//			printf("%d\t", i);
//		}
//		printf("\n");
//	}
//
//	while (count < NUMBER)
//	{
//		if (isPrime(i, prime, count))
//		{
//			prime[count++] = i;
//		}
//		{
//			printf("i=%d \tcnt=%d\t", i, count);
//			int i;
//			for (i = 0; i < NUMBER;i++)
//			{
//				printf("%d\t", prime[i]);
//			}
//			printf("\n");
//		}
//		i++;
//	}
//
//	for (i = 0; i < NUMBER; i++)
//	{
//		printf("%d", prime[i]);
//		if ((i + 1) % 5)
//		{
//			printf("\t");
//		}
//		else
//		{
//			printf("\n");
//		}
//	}
//
//	return 0;
// }
//
// int isPrime(int x, int KnownPrimes[], int NumberOfKnownPrimes)
//{
//	int ret = 1;
//	int i;
//
//	for (i = 0; i < NumberOfKnownPrimes; i++)
//	{
//		if (x % KnownPrimes[i] == 0)
//		{
//			ret = 0;
//			break;
//		}
//	}
//	return ret;
// }
//
//
//
////4.0另一种思维模式删除倍数
// #include <stdio.h>
//
// #define NUMBER 25
//
// int main()
//{
//	int isPrime[NUMBER];
//	int x;
//
//	for (int i = 0; i < NUMBER; i++)
//	{
//		isPrime[i] = 1;
//	}
//
//	for (int i = 2; i < NUMBER; i++)
//	{
//		if ( isPrime[i] )
//		{
//			for (int j = 2; j * i < NUMBER; j++)
//			{
//				isPrime[i * j] = 0;
//			}
//		}
//	}
//
//	for (int i = 2; i < NUMBER; i++)
//	{
//		if (isPrime[i])
//		{
//			printf("%d\t", i);
//		}
//	}
//	return 0;
// }

////初识指针
// #include <stdio.h>
//
// void MinMax(int a[], int len, int* min, int* max);
//
// int main()
//{
//	int a[] = { 1,2,5,7,8,4,2,5,44,6,0,4,2,4,3,3,2,446,6,44, };
//	int min;
//	int max;
//
//	MinMax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//
//	printf("min=%d,max=%d", min, max);      //外面不需要指针，你只需要&和创建变量即可，让函数里面完成指针运算
//
//	return 0;
// }
//
// void MinMax(int a[], int len, int* min, int* max)
//{
//	*min = *max = a[0];
//
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] > *max)
//		{
//			*max = a[i];
//		}
//
//		if (a[i] < *min)
//		{
//			*min = a[i];
//		}
//	}
// }
//

// const int* p;
//  等价于int const*p;
////这个里面p可以取不同的地址，所对应的i/j，i可以赋值成为别的数，p也可以指向不同的变量但是说不能*p=在进行对i的值的改变
////这里用来保护值，你传地址进去，不希望说让这个小函数里面的运算去改变你main函数里面变量或者数组的值就可以 const int* p;
// int* const p;
////这里的p只能指向一个i，i的可以自己变，*p=也可以改变只是指针只能指向唯一一个变量
// 数组int a[];
// 等价于说int* const a;只能指向一个变量不能再变；
// int a[] = { 0,1,2,3,4,5,6, };
// int* p = a;
// int* p1 = &a[4];
////指针加一p+1，是直接指向下一块！！，*（p+1）的值就是1，如果是两指针相减  eg.（p1-p）出的值并不是说是两个地址相减的值16，而应该是4（16 % sizeof（int））;
////就是之间差了几块！！

// woc上瘾了上瘾了、、、mmd我靠翁恺一秒十键，给我人看傻了，课讲的贼拉好，我只能说相见恨晚，学了三遍c
// #include <stdio.h>
// #include <stdlib.h>
//
// #define NUMBER 20
// int main()
//{
//	//动态内存分配去定义数组
//	int* p=0;
//	p = (int*)malloc(NUMBER * sizeof(int));       //这个就相当于定义了一个p数组，去申请l一块内存
//
//	for (int i = 0; i < NUMBER; i++)
//	{
//		p[i] = i;
//		printf("%d", p[i]);
//	}
//
//	free(p);
//
//	return 0;
// }
////几点良好的习惯需要注意
////1.首先要用malloc这个动态内存分配需要#include <stdlib.h>
////2.其次在定义指针的时候的好习惯,int* p = 0;一开始定义的时候就直接把指针指向NULL
////3.注意有借有还，又p=malloc，一定配套要有free（）；
////4.并且特别小心的是free（p），之间的那个p的地址一定是开始申请的时候的地址只要有个p++，移动了填进去没有用的

// #include <stdio.h>
// #include <string.h>
// int main()
//{
//	char a[] = "Hallo world!";
//	printf("%lu", strlen(a));
//
//	return 0;
// }

// #include <stdio.h>
// #include <string.h>
//
// int main()
//{
//	char a[10];
//	char b[10] = "abc";
//
//	strcpy(a, b);
//
//	printf("%s \n", a);
//	return 0;
// }

// #include <stdio.h>
//
// struct data
//{
//	int day;
//	int mouth;
//	int year;
// };
//
//
// int main()
//{
//	struct data today;
//
//	today.day = 13;
//	today.mouth = 12;
//	today.year = 2023;
//
//	//赋值的两种方式
//
//	struct data tomorrow = { 14,12,2023 };
//	struct data ThisMouth = { ThisMouth.mouth = 12,ThisMouth.year = 2023 };
//
//	printf("%i", ThisMouth.day);
//
//	return 0;
// }

//
////下一天的代码
////非常完美，包括了说月份日期的跳跃，也包括了闰年
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

//