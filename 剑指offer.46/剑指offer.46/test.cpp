//�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β�����붨��һ������ʵ���ַ�������ת�����Ĺ��ܡ����磬�����ַ���"abcdefg"������2���ú�������������ת��λ�õ��Ľ��"cdefgab"��
//
//ʾ�� 1��
//
//���� : s = "abcdefg", k = 2
//��� : "cdefgab"
//ʾ�� 2��
//
//���� : s = "lrloseumgh", k = 6
//��� : "umghlrlose"
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    string reverseLeftWords(string s, int n)
    {
        if (s.size() == 0)
            return s;
        string x = s.substr(0, n);
        string y = s.substr(n, s.size() - n) + x;
        return y;
    }
};