//дһ������������������֮�ͣ�Ҫ���ں������ڲ���ʹ�� �� + ������ - ������ * ������ / �� ����������š�
//
//ʾ��:
//
//����: a = 1, b = 1
//��� : 2
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    int add(int a, int b)
    {
        return b == 0 ? a : add(a ^ b, (unsigned int)(a & b) << 1);
    }
};
