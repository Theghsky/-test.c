
//�������ö������ĸ��ڵ� p �� q ����дһ���������������������Ƿ���ͬ��
//
//����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
//
//ʾ�� 1��
//
//���룺p = [1, 2, 3], q = [1, 2, 3]
//�����true
//ʾ�� 2��
//
//���룺p = [1, 2], q = [1, null, 2]
//�����false
//ʾ�� 3��
//
//���룺p = [1, 2, 1], q = [1, 1, 2]
//�����false
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/same-tree
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    else if (p == NULL || q == NULL)
    {
        return false;
    }
    else if (p->val != q->val)
    {
        return false;
    }
    else
    {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}
