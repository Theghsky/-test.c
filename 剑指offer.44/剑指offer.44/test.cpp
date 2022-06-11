//����һ����������������һ������s���������в�����������ʹ�����ǵĺ�������s������ж�����ֵĺ͵���s�����������һ�Լ��ɡ�
//
//ʾ�� 1��
//
//���룺nums = [2, 7, 11, 15], target = 9
//�����[2, 7] ����[7, 2]
//ʾ�� 2��
//
//���룺nums = [10, 26, 30, 31, 47, 60], target = 40
//�����[10, 30] ����[30, 10]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/he-wei-sde-liang-ge-shu-zi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int i : nums)
        {
            auto j = lower_bound(nums.begin(), nums.end(), target - i);
            if (j != nums.end() && *j == target - i)
                return { i,*j };
        }
        return {};
    }
};