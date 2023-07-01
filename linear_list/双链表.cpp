#include<bits/stdc++.h>

using namespace std;

typedef struct DNode{
    int data;
    struct DNode *prior, *next;
}DNode,*DLinkList;
//初始化双链表
bool InitDLinkList(DLinkList &L){
    L = (DNode *)malloc(sizeof(DNode));
    if(L == NULL)return false;
    L->prior = NULL;
    L->next = NULL;
    return true;
}
//p结点的后插操作
bool InsertNextNode(DNode *p,DNode *s){
    if(p==NULL||s ==NULL)
        return false;
    s->next = p->next;
    if(p->next !=NULL)
        p->next->prior = s;
    p->next =s;
    s->prior = p;
    return true;//注意语序顺序
}
//按位序插入或者前插操作
//可以将上述两种都转变为后插操作

//双链表的删除；如删除节点p后的节点s，并返回s的data
int LinkList_delete(DNode *p,DNode *s){
    if(p==NULL||s==NULL)
        return false;
    int element = s->data;
    p->next = s->next;
    if(s->next != NULL){
        s->prior = p;
    }
    free(s);
    return element;
}
//双链表的删除与遍历
//遍历条件：前向遍历，后向遍历

