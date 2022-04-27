//������һ��m��n�еķ��񣬴�����[0, 0] ������[m - 1, n - 1] ��һ�������˴�����[0, 0] �ĸ��ӿ�ʼ�ƶ�����ÿ�ο��������ҡ��ϡ����ƶ�һ�񣨲����ƶ��������⣩��Ҳ���ܽ�������������������λ֮�ʹ���k�ĸ��ӡ�
//���磬��kΪ18ʱ���������ܹ����뷽��[35, 37] ����Ϊ3 + 5 + 3 + 7 = 18���������ܽ��뷽��[35, 38]����Ϊ3 + 5 + 3 + 8 = 19�����ʸû������ܹ�������ٸ����ӣ�
//
//ʾ�� 1��
//
//���룺m = 2, n = 3, k = 1
//�����3
//ʾ�� 2��
//
//���룺m = 3, n = 1, k = 0
//�����1
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

int Sums(int num)
{
    int tmp = 0;
    while (num > 0)
    {
        tmp += num % 10;
        num /= 10;
    }
    return tmp;
}

int locating(int x, int y, int m, int n, bool** cur, int k)
{
    if (x < 0 || y<0 || x >= m || y >= n || Sums(x) + Sums(y)>k || cur[x][y] == true)
        return 0;
    cur[x][y] = true;
    return 1 + locating(x, y + 1, m, n, cur, k) + locating(x + 1, y, m, n, cur, k);
}

int movingCount(int m, int n, int k)
{
    bool** cur = (bool**)malloc(sizeof(bool*) * m);
    for (int i = 0; i < m; i++)
    {
        cur[i] = (bool*)calloc(n, sizeof(bool));
    }
    return locating(0, 0, m, n, cur, k);
}