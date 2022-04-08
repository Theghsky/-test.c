#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Position
{
    int row;//��
    int col;//��
}PT;
///////////////////////////////////////////////////////////
typedef PT STDataType;

typedef struct Stack
{
    STDataType* a;
    int top;
    int capacity;
}ST, Stack;

void StackInit(ST* ps);
void StackDestory(ST* ps);
// ��ջ
void StackPush(ST* ps, STDataType x);
// ��ջ
void StackPop(ST* ps);
STDataType StackTop(ST* ps);

int StackSize(ST* ps);
bool StackEmpty(ST* ps);

void StackInit(ST* ps)
{
    assert(ps);

    ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
    if (ps->a == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }

    ps->capacity = 4;
    ps->top = 0;
}

void StackDestory(ST* ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->top = ps->capacity = 0;
}

// ��ջ
void StackPush(ST* ps, STDataType x)
{
    assert(ps);

    // ����-������
    if (ps->top == ps->capacity)
    {
        STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
        if (tmp == NULL)
        {
            printf("realloc fail\n");
            exit(-1);
        }
        else
        {
            ps->a = tmp;
            ps->capacity *= 2;
        }
    }

    ps->a[ps->top] = x;
    ps->top++;
}

// ��ջ
void StackPop(ST* ps)
{
    assert(ps);
    // ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
    assert(ps->top > 0);

    //ps->a[ps->top - 1] = 0;
    ps->top--;
}

STDataType StackTop(ST* ps)
{
    assert(ps);
    // ջ���ˣ�����Top��ֱ����ֹ���򱨴�
    assert(ps->top > 0);

    return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
    assert(ps);

    return ps->top;
}

bool StackEmpty(ST* ps)
{
    assert(ps);

    return ps->top == 0;
}

Stack path;
Stack minpath;
///////////////////////////////////////////////////////////

//��ӡ�Թ�
void Print(int** a, int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void PrintPath(Stack* ps)
{
    //path ���ݵ���rpath
    Stack rpath;
    StackInit(&rpath);
    while (!StackEmpty(&path))
    {
        StackPush(&rpath, StackTop(&path));
        StackPop(&path);
    }

    while (!StackEmpty(&rpath))
    {
        PT top = StackTop(&rpath);
        printf("(%d,%d)\n", top.row, top.col);
        StackPop(&rpath);
    }
    StackDestory(&rpath);
}

//�ж��ܲ�����
bool IsPass(int** maze, int n, int m, PT p)
{
    if (p.row >= 0 && p.row < n
        && p.col >= 0 && p.col < m
        && maze[p.row][p.col] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Ĭ��[0��0]������ڣ�[n-1,m-1]�ǳ���
bool GetMazePath(int** maze, int n, int m, PT cur)
{
    StackPush(&path, cur);

    //����ߵ�����
    if (cur.row == n - 1 && cur.col == m - 1)
        return true;

    //̽�����������ĸ�����
    PT next;
    maze[cur.row][cur.col] = 2;

    //��
    next = cur;
    next.row -= 1;
    if (IsPass(maze, n, m, next))
    {
        if (GetMazePath(maze, n, m, next))
            return true;
    }

    //��
    next = cur;
    next.row += 1;
    if (IsPass(maze, n, m, next))
    {
        if (GetMazePath(maze, n, m, next))
            return true;
    }

    //��
    next = cur;
    next.col -= 1;
    if (IsPass(maze, n, m, next))
    {
        if (GetMazePath(maze, n, m, next))
            return true;
    }

    //��
    next = cur;
    next.col += 1;
    if (IsPass(maze, n, m, next))
    {
        if (GetMazePath(maze, n, m, next))
            return true;
    }

    StackPop(&path);

    return false;
}

int main()
{
    int n = 0, m = 0;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        //�����Թ�����ȡ�Թ���ͼ
        //��̬���ٶ�ά����
        int** maze = (int**)malloc(sizeof(int*) * n);
        for (int i = 0; i < n; ++i)
        {
            maze[i] = (int*)malloc(sizeof(int) * m);
        }

        //��ά���������
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                scanf("%d", &maze[i][j]);
            }
        }

       // Print(maze, n, m);
        StackInit(&path);
        PT entry = { 0,0 };
        if (GetMazePath(maze, n, m, entry))
        {
            PrintPath(&path);
        }
        else
        {
            printf("�Ҳ���·");
        }

        StackDestory(&path);

        for (int i = 0; i < n; ++i)
        {
            free(maze[i]);
        }
        free(maze);
        maze = NULL;
    }
    return 0;
}