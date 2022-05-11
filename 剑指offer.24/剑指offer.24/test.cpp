����������������������ϲ�����������ʹ�������еĽڵ���Ȼ�ǵ�������ġ�

ʾ��1��

���룺1->2->4, 1->3->4
�����1->1->2->3->4->4

��Դ�����ۣ�LeetCode��
���ӣ�https ://leetcode.cn/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
        {
            ListNode* newHead = new ListNode(-1);

            ListNode* cur = newHead;
            while (l1 != nullptr && l2 != nullptr)
            {
                if (l1->val < l2->val)
                {
                    cur->next = l1;
                    l1 = l1->next;
                }
                else
                {
                    cur->next = l2;
                    l2 = l2->next;
                }
                cur = cur->next;
            }
            cur->next = l1 == nullptr ? l2 : l1;
            return newHead->next;
        }
};