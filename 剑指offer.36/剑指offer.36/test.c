//��һ�� m* n �����̵�ÿһ�񶼷���һ�����ÿ�����ﶼ��һ���ļ�ֵ����ֵ���� 0��������Դ����̵����Ͻǿ�ʼ�ø�����������ÿ�����һ��������ƶ�һ��ֱ���������̵����½ǡ�����һ�����̼������������ļ�ֵ���������������õ����ټ�ֵ�����
//
//ʾ�� 1:
//
//����:
//[
//	[1, 3, 1],
//	[1, 5, 1],
//	[4, 2, 1]
//]
//��� : 12
//���� : ·�� 1��3��5��2��1 �����õ�����ֵ������
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/li-wu-de-zui-da-jie-zhi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

int maxValue(int** grid, int gridSize, int* gridColSize)
{
    int i, j, sum;
    for (i = 0; i < gridSize; i++)
    {
        for (j = 0; j < *gridColSize; j++)
        {
            if (i == 0 && j == 0)
                continue;
            else if (j == 0)
                grid[i][j] += grid[i - 1][j];
            else if (i == 0)
                grid[i][j] += grid[i][j - 1];
            else
                grid[i][j] += (grid[i][j - 1] > grid[i - 1][j]) ? grid[i][j - 1] : grid[i - 1][j];
        }
    }
    return grid[gridSize - 1][*gridColSize - 1];
}

