//���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ������û�У�����һ�����ո� s ֻ����Сд��ĸ��
//
//ʾ�� 1:
//
//���룺s = "abaccdeff"
//�����'b'
//ʾ�� 2 :
//
//	���룺s = ""
//	�����' '
//
//	��Դ�����ۣ�LeetCode��
//	���ӣ�https ://leetcode.cn/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

char firstUniqChar(char* s) {
    int i, hash[26] = { 0 };
    for (i = 0; i < strlen(s); i++) {
        hash[s[i] - 'a']++;
    }
    for (i = 0; i < strlen(s); i++) {
        if (hash[s[i] - 'a'] == 1)
            return s[i];
    }
    return ' ';
}
