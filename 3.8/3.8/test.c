#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<errno.h>

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	//��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//����ƫ����
//	//ptr = ftell(pf);
//	//printf("%d\n", ptr);
//	//��ȡ�ļ�
//	int s = rewind(pf);
//	fgetc(pf);
//	//int ch2 = rewind(pf);
//	//printf("%c\n",);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test.txt");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
		/*printf("\n");*/
	}
	printf("\n");
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}