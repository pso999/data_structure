//单链表的插入与删除
#include<bits/stdc++.h>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode * next;
}LNode,*LinkList;

bool InitList(LinkList &L){
    LNode *L = (LNode *)malloc(sizeof(LNode));
    L->next = NULL;
    return true;
}
bool InitList2(LinkList &L){
    L=NULL;
    return true;
}
//带头节点的单链表的插入(在第i个位置插入元素e)
bool ListInsert(LinkList &L,int i,int e){
    if(i<1)
        return false;
    LNode *p;
    int j=0;
    p=L;    //这直接让p指向了头节点，就相当于具有头节点的额外作用
    while(p!=NULL && j<i-1){
        p=p->next;  
        j++;
    }
    if(p==NULL) //查看p是否合法
        return false;
    LNode *s =(LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//不带头节点的单链表的插入(在第i个位置插入元素e)
bool ElemInsert(LinkList &L,int i ,int e){
    if(i<1)
    return false;
    //如果插入到第一个位置
    if(i==1){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }
    LNode *p;
    int j=0;
    p=L;
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p==NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//后插操作，在p节点之后进行插入元素e
bool InsertNextNode(LNode * p,int e){
    if(p==NULL)
        return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s == NULL)
        return false;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
//前插操作，在p节点之前进行插入元素e
//在未知头结点的前提下，我们没办法对前面元素的指针进行操作，只能通过更换数据，变相的进行了前面的插入
bool InsertPrioNode(LNode * p,int e){
    if(p==NULL)return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s==NULL)return false;
    s->data=p->data;
    p->data =e;
    s->next = p->next;
    p->next = s;
    return true;
}
//删除操作，带头结点
bool ListDelete(LinkList &L,int i,int &e){
    if(i<1)
        return false;
    LNode *p;
    int j = 0;
    p=L;
    while(p!=NULL && j<i-1){
        p=p->next;
        j++;
    }
    if(p == NULL)
    return false;
    if(p->next==NULL){
        return false;
    }
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(p);
    return true;
}
//删除给定节点p
bool DeleteNode(LNode *p){
    if(p==NULL)return false;
    LNode *q = p->next;
    p->next = q->next;
    p->data = q->data;
    free(p);
    return true;
}
//特殊情况如果要删除的节点时最后一个节点。

//按位查找，返回第i个元素（带头节点）
LNode * GetElem(LinkList L,int i){
    if(i<0){return NULL;}
    LNode * p;
    int j=0;
    p = L;
    while(p!=NULL && j<i){
        p  = p->next;
        j++;
    }return p;

}
//平均时间复杂度：O(N)
//封装的好处
//安值查找
LNode * LocateElem(LinkList L,int e){
    LNode *p = L->next;
    while(p!=NULL && p->data != e)
        p=p->next;
    return p;
}

//求链表的长度
int length(LinkList L){
    int len = 0;
    LNode *p = L;
    while(p->next!=NULL){
        p = p->next;
        len++;
    }
    return len;

}
