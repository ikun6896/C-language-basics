#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʹ��whileѭ������Ļ�ϴ�ӡ1~10

//int main()
//{
//	1~10
//	int i = 1;//��ʼ������
//
//
//	while (i<=10) //�жϲ���
//	{
//		printf("%d ", i);
//
//		i++;//��������
//	}
//
//	return 0;
//}

//ʹ��do while����Ļ�ϴ�ӡ1~10��ֵ
//int main()
//{
//	int i = 0;
//	do {
//		i += 1;
//		printf("%d\n", i);
//	} while (i <= 9);
//	return 0;
//}

//����һ����������������������Ǽ�λ����
//���磺
//���룺1234   �����4
//���룺12      �����2

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
//	int i = 1;//��ʼ������
//	while (i<=10) //�жϲ���
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//
//		i++;//��������
//	}
//	
//	//....
//	return 0;
//}

//int main()
//{
//	//1~10
//	int i = 1;//��ʼ������
//	while (i <= 10) //�жϲ���
//	{
//		i++;//��������
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