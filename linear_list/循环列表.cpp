#include<bits/stdc++.h>

using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

//初始化
bool InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));
    if(L==NULL)return false;
    L->next = L;
    return true;
}
bool Empty(LinkList &L){
    if(L->next == L)
    return true;
    else 
    return false;
}
//判断是否为表尾结点
bool isTail(LinkList &L,LNode *p){
    if(p->next == L)
        return true;
    else
        return false;
}
//循环单链表：可以访问任意元素
//循环双链表：两个闭环
//代码很相似，不具体写出来了！
//代码问题：1.如何判空2. 如何判断结点p是否在表头/表尾结点
//3. 如何在表头，表尾，表中插入删除结点，注意位置问题


