#define  _CRT_SECURE_NO_WARNINGS

//����nums������0��n������������������ȱ��һ����
//���д�����ҳ��Ǹ�ȱʧ��������
//���а취��O(n)ʱ���������
// 
//��Ŀһ����ʧ������  �Ѷȼ�

int missingNumber(int* nums, int numsSize)
{
    int x = 0;
    int i = 0;
    int j = 0;
    //�ȸ������е�ֵ���
    for (i = 0; i < numsSize; i++)
    {
        x ^= nums[i];
    }
    //�ڸ�[0-N]��ֵ���
    for (j = 0; j < numsSize + 1; j++)
    {
        x ^= j;
    }
    return x;
}


//����һ�����飬�������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
//��Ŀ�����Ѷ��е�
void inversion(int* nums, int left, int right)
{
    while (left < right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        ++left;
        --right;
    }
}


void rotate(int* nums, int numsSize, int k)
{
    if (k >= numsSize)
    {
        k %= numsSize;
    }

    inversion(nums, 0, numsSize - k - 1);
    inversion(nums, numsSize - k, numsSize - 1);
    inversion(nums, 0, numsSize - 1);

}