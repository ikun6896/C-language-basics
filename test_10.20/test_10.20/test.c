#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//使用while循环在屏幕上打印1~10

//int main()
//{
//	1~10
//	int i = 1;//初始化部分
//
//
//	while (i<=10) //判断部分
//	{
//		printf("%d ", i);
//
//		i++;//调整部分
//	}
//
//	return 0;
//}

//使用do while在屏幕上打印1~10的值
//int main()
//{
//	int i = 0;
//	do {
//		i += 1;
//		printf("%d\n", i);
//	} while (i <= 9);
//	return 0;
//}

//输入一个正整数，计算这个整数是几位数？
//例如：
//输入：1234   输出：4
//输入：12      输出：2

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int cnt = 0;
//	while (a)
//	{
//		cnt++;
//		a = a / 10;
//	}
//	printf("%d\n", cnt);
//	return 0;
//}

//int main()
//{
//	//1~10
//	int i = 1;//初始化部分
//	while (i<=10) //判断部分
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//
//		i++;//调整部分
//	}
//	
//	//....
//	return 0;
//}

//int main()
//{
//	//1~10
//	int i = 1;//初始化部分
//	while (i <= 10) //判断部分
//	{
//		i++;//调整部分
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);	
//	}
//
//	//....
//	return 0;
//}

int main()
{
	printf("hehe\n");
	goto next;
	printf("555\n");
next:
	printf("777\n");
	return 0;
}