//�� 1 + 2 + ... + n ��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A ? B : C����
//
//ʾ�� 1��
//
//���� : n = 3
//��� : 6
//ʾ�� 2��
//
//���� : n = 9
//��� : 45
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/qiu-12n-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    int sumNums(int n)
    {
        return n == 0 ? 0 : n + sumNums(n - 1);
    }
};