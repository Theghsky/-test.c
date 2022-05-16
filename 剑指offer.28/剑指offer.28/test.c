//#include<stdio.h>
//#include<stdbool.h>

//bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize);
//
//int main()
//{
//    int pushed[5] = { 1,2,3,4,5 };
//    int popped[5] = { 4,5,3,2,1 };
//    int ans=validateStackSequences(pushed, 5, popped, 5);
//    printf("%d\n", ans);
//    return 0;
//}

//���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ����磬����{ 1,2,3,4,5 } ��ĳջ��ѹջ���У�����{ 4,5,3,2,1 } �Ǹ�ѹջ���ж�Ӧ��һ���������У���{ 4,3,5,1,2 } �Ͳ������Ǹ�ѹջ���еĵ������С�
//
//ʾ�� 1��
//
//���룺pushed = [1, 2, 3, 4, 5], popped = [4, 5, 3, 2, 1]
//�����true
//���ͣ����ǿ��԰�����˳��ִ�У�
//push(1), push(2), push(3), push(4), pop() -> 4,
//push(5), pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1
//ʾ�� 2��
//
//���룺pushed = [1, 2, 3, 4, 5], popped = [4, 3, 5, 1, 2]
//�����false
//���ͣ�1 ������ 2 ֮ǰ������
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode.cn/problems/zhan-de-ya-ru-dan-chu-xu-lie-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������


bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize)
{
    int* satck = (int*)malloc(sizeof(int) * pushedSize);
    int top = -1, index = 0;
    for (int i = 0; i < pushedSize; i++)
    {
        satck[++top] = pushed[i];
        while ((top != -1) && satck[top] == popped[index])
        {
            top--;
            index++;
        }
    }
    if (top == -1)
        return true;
    return false;
}