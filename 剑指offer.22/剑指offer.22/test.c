//����һ����������������е�����k���ڵ㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ������1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣
//
//���磬һ�������� 6 ���ڵ㣬��ͷ�ڵ㿪ʼ�����ǵ�ֵ������ 1��2��3��4��5��6���������ĵ����� 3 ���ڵ���ֵΪ 4 �Ľڵ㡣
//
//ʾ����
//
//����һ������ : 1->2->3->4->5, �� k = 2.
//
//�������� 4->5.
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* getKthFromEnd(struct ListNode* head, int k)
{
    struct ListNode* p = head;

    while (k--)
    {
        p = p->next;
    }
    while (p)
    {
        p = p->next;
        head = head->next;
    }
    return head;
}