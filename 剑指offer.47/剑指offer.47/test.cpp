//����һ������ nums �ͻ������ڵĴ�С k�����ҳ����л�������������ֵ��
//
//ʾ�� :
//
//����: nums = [1, 3, -1, -3, 5, 3, 6, 7], �� k = 3
//��� : [3, 3, 5, 5, 6, 7]
//���� :
//
//	�������ڵ�λ��                ���ֵ
//	-------------- - ---- -
//	[1  3 - 1] - 3  5  3  6  7       3
//	1[3 - 1 - 3] 5  3  6  7       3
//	1  3[-1 - 3  5] 3  6  7       5
//	1  3 - 1[-3  5  3] 6  7       5
//	1  3 - 1 - 3[5  3  6] 7       6
//	1  3 - 1 - 3  5[3  6  7]      7
//
//	��Դ�����ۣ�LeetCode��
//	���ӣ�https ://leetcode.cn/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        if (nums.size() == 0 || k == 0)
            return {};
        vector<int> arr;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            int tmp = INT_MIN;
            for (int j = i; j < i + k; j++)
            {
                tmp = max(tmp, nums[j]);
            }
            arr.push_back(tmp);
        }
        return arr;
    }
};