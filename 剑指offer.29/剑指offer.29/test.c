//���ϵ��´�ӡ����������ÿ���ڵ㣬ͬһ��Ľڵ㰴�մ����ҵ�˳���ӡ��
//
//����:
//����������: [3, 9, 20, null, null, 15, 7] ,
//
//3
/// \
//9  20
/// \
//15   7
//���أ�
//
//[3, 9, 20, 15, 7]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

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
#define MAX_SIZE 10001
int* levelOrder(struct TreeNode* root, int* returnSize)
{
    *returnSize = 0;
    if (root == NULL)
        return NULL;
    int* ans = (int*)calloc(MAX_SIZE, sizeof(int));
    struct TreeNode* queue[MAX_SIZE];
    memset(queue, 0, sizeof(struct TreeNode*));
    int head = 0;
    int tail = 0;
    queue[tail++] = root;

    while (head < tail)
    {
        struct TreeNode* tmp = queue[head++];
        ans[(*returnSize)++] = tmp->val;
        if (tmp->left != NULL)
        {
            queue[tail++] = tmp->left;
        }
        if (tmp->right != NULL)
        {
            queue[tail++] = tmp->right;
        }
    }
    return ans;
}
