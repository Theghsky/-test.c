#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pf);
//  fputc('i', pf);
//  fputc('t', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf;
//	pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* ps = fopen("test.txt", "r");
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, ps);
//	printf("%s", buf);
//	//puts(buf);
//	fgets(buf, 1024, ps);
//	printf("%s", buf);
//	//puts(buf);
//
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* ps = fopen("test.txt", "w");
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", ps);
//	fputs("world\n", ps);
//
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100,3.14,"abedefa" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ�������ݴ������ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n",buf);
//	
//	//��buf �ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %.2f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = {0};
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s\n", s.n, s.score, s.arr);
//
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14,"asdfs"};
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %0.2f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//��ʽ������ʽ���ļ�
	fscanf(pf, "%d %0.2f %s", &(s.n),&(s.score),s.arr);
	printf("%d %0.2f %s\n", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}


//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�����������ȡ
//	fputs(buf, stdout);//�ӱ�׼�������ȡ
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    FILE* pFile;
//    //���ļ�
//    char ch[30] = { 0 };
//    pFile = fopen("myfile.txt", "r");
//    //�ļ��������뵽������
//    if (pFile != NULL)
//    {
//        fgets(ch,20, pFile);
//        printf("%s\n", ch);
//        //�ر��ļ�
//        fclose(pFile);
//    }
//    return 0;
//}


//int main()
//{
//    FILE* pFile;
//    //���ļ�
//    pFile = fopen("myfile.txt", "w");
//    //�ļ�����
//    if (pFile != NULL)
//    {
//        fputs("fopen example", pFile);
//        //�ر��ļ�
//        fclose(pFile);
//    }
//    return 0;
//}
