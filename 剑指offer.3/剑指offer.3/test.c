//�ҳ��������ظ������֡�
//
//
//��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ����ҳ�����������һ���ظ������֡�
//
//ʾ�� 1��
//
//���룺
//[2, 3, 1, 0, 2, 5, 3]
//�����2 �� 3
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

int findRepeatNumber(int* nums, int numsSize)
{
    int count[100000] = { 0 };
    for (int i = 0; i < numsSize; ++i)
    {
        count[nums[i]]++;
    }
    for (int j = 0; j < numsSize; ++j)
    {
        if (count[j] >= 2)
            return j;
    }
    return -1;
}