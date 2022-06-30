//����һ�����������ҳ�����С��ȡ�
//
//��С����ǴӸ��ڵ㵽���Ҷ�ӽڵ�����·���ϵĽڵ�������
//
//˵����Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
//
//ʾ�� 1��
//
//
//���룺root = [3, 9, 20, null, null, 15, 7]
//�����2
//ʾ�� 2��
//
//���룺root = [2, null, 3, null, 4, null, 5, null, 6]
//�����5
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/minimum-depth-of-binary-tree
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������\


class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }

        int min_depth = INT_MAX;
        if (root->left != nullptr) {
            min_depth = min(minDepth(root->left), min_depth);
        }
        if (root->right != nullptr) {
            min_depth = min(minDepth(root->right), min_depth);
        }

        return min_depth + 1;
    }
};