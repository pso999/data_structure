//尾插法建立单链表
#include<bits/stdc++.h>

using namespace std;

typedef struct LNode{
    int data;
    struct LNode *next;

}LNode, *LinkList;

//初始化一个单链表（带头结点）
bool InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));
    if (L = NULL){
        return false;
    }
    L->next = NULL;
    return true;
}
void test(){
    LinkList L;
    InitList(L);

}
//尾插法 建立单链表
// 思路一：设置变量length记录链表的长度，然后进行while循环
// 每次调用ListList(L,length+1,int e)
// 时间复杂度高，o(n2)
// 思路2：维护一个指针进行后插操作；
LinkList List_TailInsert(LinkList &L){
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s,*r = L;
    scanf("d%",&x);
    while(x != 9999){ //仅仅作为一个测试的标志
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("d%",&x);
    }
    r->next= NULL;
    return L;

}
LinkList List_HeadInsert(LinkList &L){
    int x;
    LNode *s = NULL;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d",&x);
    while(x != 99999){
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d",&x);
    }
    return L;
}

//三个练习：
// 如果没有头结点如何进行头插
LinkList List_Nohead_TailInsert(LinkList &L){

}

// 如果没有头结点如何进行尾插
LinkList List_Nohead_HeadInsert(LinkList &L){
    
}
// 头插法的原地逆置
LinkList List_Inverse(LinkList &L){
    LinkList L1;
    L1->next= NULL;
    LNode *p=L;
    LNode *s=NULL;
    while(p!=NULL){
        s->data = p->data;
        s->next = L1->next;
        L1->next = s;
        p=p->next;
    }
    return L1;
}