//����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���
//
//ʾ�� 1��
//
//���룺head = [1, 3, 2]
//�����[2, 3, 1]

/**
} * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* reversePrint(struct ListNode* head, int* returnSize)
{
    int i = 0, j = 0, k = 0;
    static int numbers[10000];
    struct ListNode* cur = head;
    while (cur != NULL)
    {
        numbers[i++] = cur->val;
        cur = cur->next;
    }
    k = i;
    int* answer = (int*)malloc(sizeof(int) * i);
    while (i > 0)
    {
        answer[j++] = numbers[i - 1];
        i--;
    }
    *returnSize = k;
    return answer;
}