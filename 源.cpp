#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//static 1 ���β��ֱ���
////oid test()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++);
//	{
//		test();
//	}
//
//	return 0;
//}
//
//struct Book
//{
//	char name[20];
//	short price;
//
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//		
//	printf("%s\n", pb->name);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", pb->price);
//	printf("%d\n", (*pb).price);
//	return 0;
//
//}
//
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	 
//	return 0;
//int main()
//{
//	int a;
//    a = 0;
//    while (a<100)
//    {
//
//        if (a % 2 == 1)
//            printf("%d\n", a);
//        a++;
//    }
//   
// 
//
//	return 0;
//}
//����ϰһ��
//int main()
//{
//	int a;
//	a = 0;
//	while (a <= 100)
//	{
//		if (a % 2== 1)
//			printf("%d\n", a);
//		a++;
//
//	}
//
//	return 0;
//}
////�㷨
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//
//
//int x;
//scanf("%d", &x);
//printf("%d\n", x);
//return 0;
//
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//			break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//
//
//
//	}
//
//
//	return 0;
//
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}
 
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);


	}
	return 0;


}

