//��һ������ nums �г�һ������ֻ����һ��֮�⣬�������ֶ����������Ρ����ҳ��Ǹ�ֻ����һ�ε����֡�
//
//ʾ�� 1��
//
//���룺nums = [3, 4, 3, 3]
//�����4
//ʾ�� 2��
//
//���룺nums = [9, 1, 7, 9, 7, 9, 7]
//�����1
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-ii-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i += 3)
        {
            if (i == n - 1)
                return nums[n - 1];
            if (nums[i] == nums[i + 2])
                continue;
            else
                return nums[i];
        }
        return 0;
    }
};