
// ��ر��������뷨����Ӣ�ĵ���ĸ�ͱ����š�
// �����������ϵͳ����������������ִ�д��롿��ť����������ύ���������������ύ����ť��
// ע�⣺�����⣬�벻Ҫ��ӡ�����κζ�����ַ�������Ӱ������֤
// ��OJϵͳ�ǻ��� OxCoder ������������ַ��www.oxcoder.com

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int* solution(int count, int (*arr)[2])
{
    int* result;
    // TODO: ���ڴ˱�д����
    int n = 0;
    int car[1000] = { 0 };
    for (n; n <= count; n++)
    {
        if (arr[n][1] != 13)
        {
            int i = 0;
            i = arr[n][0] / arr[n][1];
            if ((arr[n][0] % arr[n][1]) != 0)
                i++;
            car[n] = i;
        }
        else
        {
            int j = 0;
            j = (arr[n][0]) / 12;
            if ((arr[n][0] % 12) != 0)
                j++;
            car[n] = j;
        }
    }
    result = car;
    return result;
}

int main()
{

    int num;
    int count = 0;
    int arr[1000][2];
    int n, k;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &n, &k);
        arr[count][0] = n;
        arr[count][1] = k;
        count++;
    }


    int* result = solution(count, arr);

    for (int i = 0; i < count; i++) {
        printf("%d", result[i]);
        printf("\n");
    }

    return 0;
}