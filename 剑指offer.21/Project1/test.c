//����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����������������ǰ�벿�֣�����ż��������ĺ�벿�֡�
//
//ʾ����
//
//���룺nums = [1, 2, 3, 4]
//�����[1, 3, 2, 4]
//ע��[3, 1, 2, 4] Ҳ����ȷ�Ĵ�֮һ��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* exchange(int* nums, int numsSize, int* returnSize)
{
    int low = 0, hight = numsSize - 1, tmp = 0;
    while (low < hight)
    {
        if (nums[low] % 2 == 0 && nums[hight] % 2 == 1)
        {
            tmp = nums[low];
            nums[low] = nums[hight];
            nums[hight] = tmp;
        }
        if (nums[low] % 2 == 1)
            low++;
        if (nums[hight] % 2 == 0)
            hight--;
    }
    *returnSize = numsSize;
    return nums;
}