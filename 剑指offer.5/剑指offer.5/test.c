//��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��
//
//ʾ�� 1��
//
//���룺s = "We are happy."
//�����"We%20are%20happy."
//
//
//���ƣ�
//
//0 <= s �ĳ��� <= 10000
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/ti-huan-kong-ge-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

char* replaceSpace(char* s)
{
    int count = 0;
    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }
    int len = strlen(s) + 2 * count;
    char* answer = malloc(sizeof(char) * len + 1);
    for (int i = 0, j = 0; i < strlen(s); i++, j++)
    {
        if (s[i] == ' ')
        {
            answer[j] = '%';
            answer[++j] = '2';
            answer[++j] = '0';
        }
        else
        {
            answer[j] = s[i];
        }
    }
    answer[len] = '\0';
    return answer;
}