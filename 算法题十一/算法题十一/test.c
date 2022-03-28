//����������ĸ��ڵ� root ���������ڵ�ֵ�� ǰ�� ������
//
//ʾ�� 1��
//
//
//���룺root = [1, null, 2, 3]
//�����[1, 2, 3]
//ʾ�� 2��
//
//���룺root = []
//�����[]
//ʾ�� 3��
//
//���룺root = [1]
//�����[1]
//ʾ�� 4��
//
//
//���룺root = [1, 2]
//�����[1, 2]
//ʾ�� 5��
//
//
//���룺root = [1, null, 2]
//�����[1, 2]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/binary-tree-preorder-traversal
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

//�Ѷȣ���

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

int TreeSize(struct TreeNode* root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

void _prevOrder(struct TreeNode* root, int* a, int* pi)
{
    if (root == NULL)
        return;

    a[*pi] = root->val;
    ++(*pi);

    _prevOrder(root->left, a, pi);
    _prevOrder(root->right, a, pi);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    int size = TreeSize(root);
    int* a = (int*)malloc(size * sizeof(int));
    int i = 0;
    _prevOrder(root, a, &i);

    *returnSize = size;

    return a;
}