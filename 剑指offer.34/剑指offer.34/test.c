//������0123456789101112131415���ĸ�ʽ���л���һ���ַ������С�����������У���5λ�����±�0��ʼ��������5����13λ��1����19λ��4���ȵȡ�
//
//��дһ���������������nλ��Ӧ�����֡�
//
//ʾ�� 1��
//
//���룺n = 3
//�����3
//ʾ�� 2��
//
//���룺n = 11
//�����0
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/shu-zi-xu-lie-zhong-mou-yi-wei-de-shu-zi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

int findNthDigit(int n)
{
    long count = 1, base = 9;
    while (n - count * base > 0)
    {
        n -= count * base;
        count++;
        base *= 10;
    }
    int num = n / count;
    int digit = n % count;
    long ans = pow(10, count - 1) + num;
    if (digit == 0)
    {
        ans -= 1;
        digit = count;
    }
    for (int i = digit; i < count; i++)
        ans /= 10;
    return ans % 10;
}