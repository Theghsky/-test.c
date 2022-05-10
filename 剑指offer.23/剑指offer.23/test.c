//����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣
//
//ʾ��:
//
//����: 1->2->3->4->5->NULL
//��� : 5->4->3->2->1->NULL
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/fan-zhuan-lian-biao-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    while (cur)
    {
        struct ListNode* tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
}