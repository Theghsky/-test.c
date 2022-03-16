#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��

//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/search-insert-position
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

//ʾ�� 1:
//
//����: nums = [1, 3, 5, 6], target = 5
//��� : 2

int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;
    int cmp = numsSize;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] >= target)
        {
            cmp = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return cmp;
}

//���ֲ���ԭ��
int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if(nums[mid]>target)
        {
            right = mid - 1;
        }
        else 
        {
            return mid;
        }
    }
    return 0;
}


int main()
{
    int nums[] = { 0,1,3,5,7,10,11,14 };
    int y=searchInsert(nums,8,2);
    if (y == 0)
    {
        printf("�Ҳ���\n");
    }
    else
    {
        printf("%d \n", y);
    }
	return 0;
}