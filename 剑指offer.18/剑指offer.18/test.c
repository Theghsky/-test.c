//�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
//
//ʾ�� 1:
//
//����: n = 1
//��� : [1, 2, 3, 4, 5, 6, 7, 8, 9]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

int* printNumbers(int n, int* returnSize)
{
    int max = pow(10, n);
    int* ret = (int*)malloc(sizeof(int) * (max - 1));
    *returnSize = max - 1;
    int size = 0;
    for (int i = 1; i < max; ++i)
    {
        ret[size++] = i;
    }
    return ret;
}