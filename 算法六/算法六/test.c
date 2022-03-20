//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

//ʾ�� 1��
//���룺head = [1, 2, 3, 4, 5]
//�����[5, 4, 3, 2, 1]
//��Դ��
//https ://leetcode-cn.com/problems/reverse-linked-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    //�ⷨ����
    struct ListNode* cur = head;
    struct ListNode* newHead = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;

        //ͷ��
        cur->next = newHead;
        newHead = cur;
        cur = next;
    }
    return newHead;

    //�ⷨһ��
    // if(head==NULL)
    // {
    //     return NULL;
    // }
    // //��ʼ����
    // struct ListNode* n1=NULL,*n2=head,*n3=n2->next;
    // //��������
    // while(n2)
    // {
    //     //��������
    //     n2->next=n1;
    //     n1=n2;
    //     n2=n3;
    //     if(n3!=NULL)
    //         n3=n3->next;
    // }
    // return n1;
}
