//��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
//1.�����������10�������жϣ��Ƚ���������100���ٿ������ٽ���������268���ٿ��������������Ľ�������������������ǽ�����뿴���������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	long int i;
	double x, y;
	for (i = 0; i <= 100000; ++i)
	{
		x = sqrt(i + 100);
		y = sqrt(i + 268);
		if ((x * x == i + 100) && (y * y == i + 268))
			printf("%ld\n", i);
	}
	return 0;
}

//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
//1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬
//   ��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣

int main()
{
	int year, mouth, day;
	int i, count;
	scanf("%d %d %d", &year, &mouth, &day);
	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (i=0,count = 0; count < mouth; ++count)
	{
		i += arr[count];
	}
	if ((year % 400 == 0 || year % 4 == 0 && year % 100 == 0) && mouth > 3)
		i= i + day + 1;
	printf("%d\n", i);
	return 0;
}