//����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֡�
//
//ʾ�� 1��
//
//���룺matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
//�����[1, 2, 3, 6, 9, 8, 7, 4, 5]
//ʾ�� 2��
//
//���룺matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]
//�����[1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/shun-shi-zhen-da-yin-ju-zhen-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return {};
        vector<int> answer;
        int rows = matrix.size(), cols = matrix[0].size();
        int top = 0, low = rows - 1, left = 0, right = cols - 1;
        while (top <= low && left <= right)
        {
            for (int col = left; col <= right; col++)
            {
                answer.push_back(matrix[top][col]);
            }
            for (int row = top + 1; row <= low; row++)
            {
                answer.push_back(matrix[row][right]);
            }
            if (top < low&& left < right)
            {
                for (int col = right - 1; col > left; col--)
                {
                    answer.push_back(matrix[low][col]);
                }
                for (int row = low; row > top; row--)
                {
                    answer.push_back(matrix[row][left]);
                }
            }
            top++;
            right--;
            left++;
            low--;
        }
        return answer;
    }
};



