//������21��
//��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬
//�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ����
//�Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
//����10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�

#include <stdio.h>

int main(void)
{
    int x, n = 10;
    for (x = 1; n >= 2; --n)
    {
        x = (x + 1) * 2;
    }
    printf("%d\n", x);
    return 0;
}

//
//��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa, b, c���ˣ��Ҷ�Ϊx, y, z���ˡ�
//�ѳ�ǩ���������������������Ա����������������
//a˵������x�ȣ�c˵������x, z�ȣ��������ҳ��������ֵ�������

#include <stdio.h>

int main(void)
{
	char i, j, k;
	for (i = 'x'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j)
			{
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != k && j != k)
					{
						if (i != 'x' && k != 'x' && k != 'z')
							printf("a-%c b-%c c-%c\n", i, j, k);
					}
				}

			}
		}
	}
	return 0;
}


//��Ŀ����һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13...���������е�ǰ20��֮�͡�

#include <stdio.h>

int main(void)
{
	int i = 2, j = 1;
	int k = 0, x = 0;
	for (int n = 0; n <= 20; ++n)
	{
		k += i / j;
		x = i;
		i = i + j;
		j = x;
	}
	printf("%d\n", k);
	return 0;
}


//��Ŀ����1 + 2!+ 3!+ ... + 20!�ĺ�

#include <stdio.h>

int main(void)
{
	int i, j, n;
	int x = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int k = 1;
		for (j = 1; j <= i; j++)
		{
			k *= j;
		}
		x += k;
	}
	printf("%d\n", x);
	return 0;
}

//���õݹ鷽����5!��

#include <stdio.h>

int fn(int x)
{
	if (x != 1)
		return x * fn(x - 1);
	return 1;
}
int main(void)
{
	int x;
	scanf("%d", &x);
	printf("%d\n", fn(x));
	return 0;
}


//��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������

#include <stdio.h>

void fn(char* p, int sz)
{
	if (sz == 0)
	{
		printf("%c", p[sz]);
		return;
	}
	else
	{
		printf("%c", p[sz]);
		fn(p, sz - 1);
	}
}
int main(void)
{
	char arr[5] = { 0 };
	for (int i = 0; i < 5; ++i)
	{
		scanf("%c", &arr[i]);
	}
	printf("\n");
	int sz = sizeof(arr) / sizeof(arr[0]);
	fn(arr, sz);
	printf("\n");
	return 0;
}
