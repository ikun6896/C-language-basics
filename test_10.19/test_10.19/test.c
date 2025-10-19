#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//分支和循环。
//输入一个整数，判断是否为奇数
//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)//==  是判断相等    = 是赋值
//		printf("%d 是奇数\n", num);
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);
//	else
//		printf("%d 是偶数\n", num);
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//判断
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44) //18~44
//		printf("青年\n");
//	else if (age <= 59)//45~59
//		printf("中老年\n");
//	else if (age <= 89)//60~89
//		printf("老年\n");
//	else  //>=90
//		printf("老寿星\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n", a == 6);//0
//	printf("%d\n", a == 5);//1
//
//	return 0;
//}
//
//

//当我们拿一个变量和一个常量比较是否相等的时候
//int main()
//{
//	int x = 0;
//	//if (x == 3)
//	//	printf("hehe\n");
//
//	if (3 == x)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    if (a > 5)
//        b = 3;
//    else
//        b = -3;
//
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//
//	return 0;
//}
// 
// 
// 
//练习2：使用条件表达式实现找两个数中较大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	b = (a > b?a : b);
//	printf("%d\n", b);
//	return 0;
//}


//输入一个年份year，判断year是否是闰年
//闰年判断的规则：
//1. 能被4整除，并且不能被100整除是闰年
//2. 能被400整除是闰年
//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d是闰年\n",year);
//	}
//	return 0;
//}

//短路。
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++||++b||d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//    printf("i = %d\n", i);
//
//
//    return 0;
//}


//switch
//输⼊任意⼀个整数值，计算除3之后的余数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a % 3)
//	{
//	case 0 :
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	while (scanf("%d", &day) != EOF)
//	{
//		switch (day)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//	}
//	return 0;
//}

 