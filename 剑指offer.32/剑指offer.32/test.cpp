//������������ arr ���ҳ�������С�� k ���������磬����4��5��1��6��2��7��3��8��8�����֣�����С��4��������1��2��3��4��
//
//ʾ�� 1��
//
//���룺arr = [3, 2, 1], k = 2
//�����[1, 2] ����[2, 1]
//ʾ�� 2��
//
//���룺arr = [0, 1, 2, 1], k = 1
//�����[0]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/zui-xiao-de-kge-shu-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> vec(k, 0);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < k; ++i) {
            vec[i] = arr[i];
        }
        return vec;
    }
};

���ߣ�LeetCode - Solution
���ӣ�https ://leetcode.cn/problems/zui-xiao-de-kge-shu-lcof/solution/zui-xiao-de-kge-shu-by-leetcode-solution/
��Դ�����ۣ�LeetCode��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������